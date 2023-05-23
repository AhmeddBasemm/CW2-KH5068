Ahmed Basem - 202000188 <br>
Operating Systems and Plaforms CW2

<hr>
Sure, here's the markdown content that you can copy and paste into a README.md file:

# Multi-Threaded C Program with Mutex Locks

This is a sample C program that demonstrates multi-threaded programming using Pthreads and mutex locks. The program defines a global counter variable and creates 10 threads, with each thread incrementing the counter variable a million times. The program uses mutex locks to prevent race conditions and ensure correct results.

## Requirements

To compile and run this program, you will need:

- A C compiler, such as GCC or Clang
- The Pthreads library, which is included in most Unix-like operating systems

## Compilation

To compile the program, use the following command:

```
gcc -pthread -o program program.c
```

This will compile the program.c file with Pthreads support and create an executable file called "program".

## Running the Program

To run the program, use the following command:

```
./program
```

This will start the program, which will create 10 threads and increment the global counter variable a million times each. The program uses mutex locks to prevent race conditions and ensure correct results.

After the program finishes, it will print the final value of the counter variable.

