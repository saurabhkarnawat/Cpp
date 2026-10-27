1.What are the main features of C++?
Main Features of C++ — 
1. Object-Oriented Programming: C++ supports object-oriented programming, which organizes programs using classes and objects. It supports encapsulation, abstraction, inheritance, and polymorphism.
2. Classes and Objects: A class is a blueprint that defines data members and member functions. An object is an instance of a class that can access its members according to their access permissions.
3. Encapsulation: Encapsulation is the process of combining data members and member functions into a single unit called a class. It helps protect data from unauthorized access.
4. Data Abstraction: Abstraction means hiding implementation details and showing only essential features to the user. It reduces complexity and makes programs easier to use.
5. Inheritance: Inheritance allows one class to acquire and extend the properties and behaviors of another class. It promotes code reusability and supports hierarchical relationships between classes.
6. Polymorphism: Polymorphism means one interface can represent different behaviors. C++ supports compile-time polymorphism through function and operator overloading, and runtime polymorphism through virtual functions.
7. Function Overloading: Function overloading allows multiple functions to have the same name but different parameter lists. The compiler selects the appropriate function based on the arguments.
8. Operator Overloading: Operator overloading allows existing operators to perform specific operations on user-defined data types, such as adding two objects using the + operator.
9. Dynamic Memory Allocation: C++ supports dynamic memory allocation during program execution using new and releases allocated memory using delete. It also supports dynamic arrays and smart pointers.
10. Constructors and Destructors: Constructors initialize objects when they are created, while destructors perform cleanup when objects are destroyed. They help manage object lifetimes and resources.
11. Exception Handling: C++ provides exception handling using try, throw, and catch. It helps manage exceptional situations without mixing all error-handling logic with normal program execution.
12. Templates: Templates support generic programming by allowing functions and classes to work with different data types without writing separate implementations for each type.
13. Standard Template Library (STL): The STL provides reusable containers, algorithms, iterators, and function objects. It reduces development effort and provides commonly used data structures and operations.
14. Portability: C++ programs can be compiled and executed on different platforms with suitable compilers and libraries. However, platform-dependent code may require modifications.
15. High Performance: C++ provides efficient execution, low-level memory access, and control over system resources. It is widely used in embedded systems, operating systems, game development, and other performance-critical applications.
16. Multi-Paradigm Programming: C++ supports procedural, object-oriented, and generic programming, along with functional programming techniques. This flexibility allows programmers to choose suitable approaches for different problems.
17. Rich Standard Library: C++ provides a comprehensive standard library containing facilities for input/output, strings, containers, algorithms, mathematical operations, and other common programming tasks.
18. Reusability: C++ supports code reuse through inheritance, functions, classes, templates, and composition. Reusability reduces code duplication and simplifies maintenance.
19. Type Checking: C++ is a statically typed language. The types of variables and expressions are checked primarily at compile time, helping detect many type-related errors before execution.
20. Compatibility with C: C++ shares many features with C and supports much C-style programming. However, C and C++ are separate languages, and not all valid C programs are valid C++ programs.


 2.What is the difference between C and C++? 
 Important Differences Explained
1. Programming approach

C primarily follows procedural programming, where a program is organized around functions.

C++ supports procedural programming and object-oriented programming, where programs can be organized around classes and objects.

2. Function overloading

C does not allow multiple functions with the same name but different parameter lists.

C++ supports function overloading, allowing multiple functions to have the same name with different parameter lists.

3. Memory allocation

C commonly uses malloc() to allocate memory dynamically and free() to release it.

C++ supports new and delete, which work with object construction and destruction. C++ also supports C-style memory allocation functions.

4. Object-oriented programming

C does not natively provide classes, inheritance, or virtual functions.

C++ supports classes, inheritance, encapsulation, abstraction, and polymorphism.

5. Input and output

C commonly uses printf() and scanf() for input and output.

C++ provides stream-based input and output through cin and cout.
Conclusion
C is primarily a procedural programming language, while C++ extends many C-style programming capabilities with object-oriented programming, generic programming, and additional language features.
 
 3.What are the differences between a compiler, linker, and loader? 
 
 Difference Between Compiler, Linker, and Loader
A compiler, linker, and loader perform different tasks in converting a program written in a high-level language into a program that can execute in memory.
1. Compiler
A compiler translates source code written in a programming language such as C or C++ into object code or another intermediate representation. It also checks for syntax errors and performs other forms of analysis.
2. Linker
A linker combines object files and resolves references between them and libraries. It produces an executable file or another type of linked output.
3. Loader
A loader loads an executable program into memory, prepares it for execution, and transfers control to the program's entry point. The operating system typically performs these tasks.
 
 
 
4.What is the difference between declaration and definition? 
A declaration introduces the name and type of a variable, function, or other entity to the compiler.

A definition creates the entity itself, such as allocating storage for a variable or providing the implementation of a function.



5.What is the difference between a variable's scope, lifetime, and linkage? 

These three concepts describe different aspects of a variable.
- Scope: Where can I access the variable by its name?
- Lifetime: When does the variable exist in memory?
- Linkage: Can the same variable or function be referred to from another scope or translation unit?




6.What are local, global, static, and automatic variables?
1. Local Variable
A local variable is a variable declared inside a function or a block. It can be accessed only within its scope. Its lifetime depends on its storage duration. A typical local variable has automatic storage duration, and its value is not retained between separate function calls.
2. Global Variable
A global variable is declared outside all functions, usually at file scope. It can be accessed by functions within its scope. A global variable has static storage duration, meaning it exists throughout the execution of the program. If it is not explicitly initialized, it is initialized to zero.
3. Static Variable
A static variable is a variable with static storage duration. It exists throughout the execution of the program and retains its value for the duration of its lifetime. A static variable declared inside a function has local scope but retains its value between function calls. A static variable declared at file scope has internal linkage in C, restricting access by name to the same translation unit.
4. Automatic Variable
An automatic variable is a variable whose storage duration is automatic. It is generally declared inside a function or block. It is created when execution enters its scope and ceases to exist when that scope ends. If it is not explicitly initialized, its value is indeterminate. In C, the auto keyword can be used to declare an automatic variable, but it is usually omitted.

 7.What is the difference between stack and heap memory?
 Stack memory is typically used for function call management, including local automatic variables, function parameters, and return information.

Heap memory is used for dynamic memory allocation, where memory can be requested and released during program execution.

 8.What is the difference between const and constexpr in C++11?* 
 
 9. is the difference between #define and const? 
#define is a preprocessor directive used to define macros, whereas const is a keyword used to declare an object whose value cannot be modified through that name after initialization.
 
 What is the difference between typedef and using in C++11?*