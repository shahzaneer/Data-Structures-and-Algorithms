# C++ Memory Management: new and delete

- C++ allows us to allocate the memory of a variable or an array in run time. This is known as dynamic memory allocation.

- In other programming languages such as Java and Python, the compiler automatically manages the memories allocated to variables. But this is not the case in C++.

- In C++, we need to deallocate the dynamically allocated memory manually after we have no use for the variable.

- We can allocate and then deallocate memory dynamically using the new and delete operators respectively.

> - Dynamic memory allocation can make memory management more efficient.
> - Especially for arrays, where a lot of the times we don't know the size of the array until
> the run time