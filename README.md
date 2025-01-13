# **Push Swap Sorting Algorithm**

## **Overview**
This repository contains the implementation of an efficient **sorting algorithm** for the **Push Swap** project at 42 Programming School. The goal of this algorithm is to sort a list of integers using **two stacks** with the minimum number of operations, demonstrating a deep understanding of **low-level C programming**, **algorithmic efficiency**, and **memory management**.

## **Project Features**
- **Efficient Sorting**: The algorithm uses **two stacks** to perform sorting with minimal moves, based on a series of allowed operations.
- **Low-Level Programming**: Written in **C**, the algorithm makes use of **system-level programming**, including custom memory management and input validation.
- **Optimized for Performance**: The project includes optimizations using **GCC**, a **Makefile**, and **Valgrind** for debugging and memory leak detection.

## **Tools and Technologies**
- **C Programming**: The core implementation is written in **C**, showcasing proficiency in low-level programming.
- **GCC Compiler**: The program is compiled using **GCC**, ensuring compatibility and optimal performance.
- **Makefile**: A **Makefile** is provided to streamline the build process and ensure efficient compilation and project structure.
- **Valgrind**: **Valgrind** is used for **memory leak detection** and optimizing memory usage to ensure the program's stability and efficiency.
- **Custom Library**: A custom library was created for **memory management** and **input validation**, demonstrating a strong grasp of system-level programming.

## **Algorithm**
The **Push Swap** algorithm is designed to perform sorting with the least number of operations using the following allowed moves:
- **Swap**: Swap the first two elements in one of the stacks.
- **Push**: Push elements between stacks.
- **Rotate**: Rotate the elements in the stack.
- **Reverse Rotate**: Reverse rotate the elements in the stack.

### **Key Features of the Algorithm**:
- The algorithm leverages efficient **rotation calculations** to minimize the number of operations when rotating elements across stacks.
- **Memory optimization** is achieved by controlling the size of allocated memory and preventing memory leaks through **manual memory management**.
- The algorithm includes a **custom sorting mechanism** that adapts based on the size of the stack and ensures that the list is sorted with the least number of moves.

## **How It Works**
1. **Push elements** from Stack A to Stack B in a descending order. This allows Stack A to be sorted in ascending order when pushed back.
2. The algorithm works by calculating the **minimum number of operations** to place each element in the correct position in Stack B.
3. Once Stack B is populated, elements are **pushed back** to Stack A, ensuring that Stack A is sorted in ascending order by following efficient rotation strategies.

## **Installation and Usage**

### **Requirements**:
- **GCC Compiler**
- **Make**
- **Valgrind** (for debugging and memory leak checking)

### **Steps to Compile and Run**:
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/push_swap.git
   cd push_swap
   ```

2. Compile the project using **Make**:
   ```bash
   make
   ```

3. Run the program:
   ```bash
   ./push_swap <list_of_integers>
   ```

4. To check for memory leaks, run:
   ```bash
   valgrind --leak-check=full ./push_swap <list_of_integers>
   ```

## **Contributions**
Feel free to fork the repository, create pull requests, or suggest improvements to further optimize the algorithm or enhance its features. Contributions and feedback are always welcome!

## **License**
This project is licensed under the MIT License.

---

### **Conclusion**:
This project demonstrates the implementation of a highly efficient sorting algorithm using **two stacks**. It highlights key programming skills, including **algorithm optimization**, **memory management**, and **debugging**, and is a perfect example of applying **system-level programming** concepts in real-world scenarios. The use of **GCC**, **Makefile**, and **Valgrind** further emphasizes the importance of developing clean, efficient, and maintainable code.

---
