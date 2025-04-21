# 📘 Prime Number Computation - Sequential vs Parallel (MPI)

## 📝 Description

This project was developed as part of the **Parallel Computing** course.  
It aims to compare the performance of **sequential** and **parallel (MPI-based)** implementations of a prime number generator.

## 🚀 Objective

To highlight the impact of parallel computing using **MPI (Message Passing Interface)** by comparing execution times between:
- A traditional **sequential** implementation
- A **parallel** implementation using **distributed memory and multiple processes**

## ⚙️ Features

- ✅ Sequential version written in C++ using `<chrono>` to measure execution time.
- ✅ Parallel version using **MPI**, with workload distributed across processes.
- ✅ Execution time output for both implementations.
- ✅ Visual chart showing the performance comparison.

## 🧪 How to Run

### 🔧 Compile

```bash
# Compile the MPI version
mpic++ -o prime_mpi prime_mpi.cpp

# Compile the sequential version
g++ -o prime_seq prime_seq.cpp
```

## ▶️ Execute
# Run parallel version with n processes
mpiexec -np n projectParallelOfPrimeNumber.exe
- 📎 NOTE : i use it 20 proccessor whitch is the maxmum for me .

# Run sequential version
projectSequentialOfPrimeNumber.exe
## 📊 Output
# Prime numbers up to user-defined N

Execution time in seconds

A performance comparison chart (image file included)

📎 Note
This project is for academic purposes.
The performance chart is based on illustrative data and may vary depending on system hardware and MPI environment.
