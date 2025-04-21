#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;
using namespace chrono;


bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i)
        if (num % i == 0)
            return false;
    return true;
}

int main(int argc, char const* argv[]) {

    int n; 
    cout << "Enter the sequence Number (upper Limit N )" << endl ;
    cin >> n;


    auto start = high_resolution_clock::now();


    cout << "print number up to N " << n << " are:" << endl;
    for (int i = 2; i <= n; ++i)
        if (isPrime(i))
            cout << i << " ";

    auto end = high_resolution_clock::now();

    duration<double> duration = end - start;

    cout << endl;

    cout << "\nExecution Time: " << duration.count() << " seconds\n";
	return 0;
}