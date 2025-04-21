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
mpiexec -np n projectParallelOfPrimeNumber.exe

# Compile the sequential version
g++ -o projectSequentialOfPrimeNumber.cpp
```

## ▶️ Execute
# Run parallel version with n processes
📎 **Note:** This project was tested using **20 processes**, which is the maximum allowed on my current setup.
## 📊 parallel Code 
![Code Of Parallel using MPI c++/c#](project_Imgs/Parallel_Code.png)
# Prime numbers up to user-defined 100
![Testing On 100 Numbers](project_Imgs/Parallel_Test_On_100_Number.png)
# Prime numbers up to user-defined 5000
![Testing On 5000 Numbers](project_Imgs/Paralell_Test_On_5000_Numbers.png)

---

# Run sequential version
## 📊 Sequential Code 
![Code Of sequential using c++/c#](project_Imgs/Sequential_Code.png)
# Prime numbers up to user-defined 100
![Testing On 100 Numbers](project_Imgs/Sequential_Test_On_100_Number.png)
# Prime numbers up to user-defined 5000
![Testing On 5000 Numbers](project_Imgs/Sequential_Test_On_5000_Numbers.png)

---

A performance comparison chart (image file included)
![MPI vs Sequential](project_Imgs/comparsion.png)

📎 **Note**: The performance chart is based on illustrative data and may vary depending on system hardware and MPI environment.


---

## 👨‍🎓 Author

**Hassan Youssef Al-Husseini**  
Fifth-year Computer Engineering Student  
This project was developed as part of the **Parallel Computing** course during the graduation year + This project is for academic purposes.
