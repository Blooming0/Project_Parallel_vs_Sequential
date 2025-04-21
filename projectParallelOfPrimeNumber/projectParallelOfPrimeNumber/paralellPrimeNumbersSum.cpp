#include <mpi.h>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i)
        if (num % i == 0)
            return false;
    return true;
}

int main(int argc, char* argv[]) {
    int rank, size, N;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (rank == 0) {
        cout << "Enter the upper limit N: ";
        cin >> N;
    }

    MPI_Bcast(&N, 1, MPI_INT, 0, MPI_COMM_WORLD);

    double start_time = MPI_Wtime();

    vector<int> local_primes;

    for (int i = 2 + rank; i <= N; i += size) {
        if (isPrime(i))
            local_primes.push_back(i);
    }

    int local_count = local_primes.size();
    vector<int> recv_counts(size);
    MPI_Gather(&local_count, 1, MPI_INT, recv_counts.data(), 1, MPI_INT, 0, MPI_COMM_WORLD);

    vector<int> displs(size), all_primes;
    if (rank == 0) {
        int total = 0;
        for (int i = 0; i < size; ++i) {
            displs[i] = total;
            total += recv_counts[i];
        }
        all_primes.resize(total);
    }

    MPI_Gatherv(local_primes.data(), local_primes.size(), MPI_INT,
        all_primes.data(), recv_counts.data(), displs.data(), MPI_INT,
        0, MPI_COMM_WORLD);

    double end_time = MPI_Wtime();

    if (rank == 0) {
        cout << "Prime numbers up to " << N << " are:\n";
        for (int prime : all_primes)
            cout << prime << " ";
        cout << "\nExecution Time: " << (end_time - start_time) << " seconds\n";
    }

    MPI_Finalize();
    return 0;
}