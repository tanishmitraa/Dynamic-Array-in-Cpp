# Custom-Dynamic-Array-in-C++-
A lightweight, educational implementation of a dynamic array in C++, built from scratch to understand how low-level memory management and STL containers work internally.

This project recreates core features of std::vector, including:

dynamic resizing

manual memory allocation

push-back insertion

size/capacity tracking

index access via operator[]

It was built as a hands-on exercise after transitioning from Python to C++ to learn how data structures actually work under the hood.

🌟 Features

✔ Manual Memory Management

Uses new[] and delete[] to allocate and free heap memory.

✔ Automatic Resizing

When the array is full, capacity doubles:

Allocate new memory

Copy old elements

Free old memory

Update internal pointer

✔ push_back() Function

Works exactly like vector::push_back() (without full safety checks yet).

✔ Indexing Support

Access elements using arr[i] with an overloaded operator[].

✔ Tracks Size & Capacity

Internal variables maintain:

size → number of elements

capacity → allocated storage

🔧 Implementation Details
Constructor

Allocates memory and sets initial size/capacity.

Destructor

Cleans up memory to prevent leaks.

resizeArray()

Doubles capacity and migrates all elements.

push_back(value)

Adds a new element, triggers resize if full.

🚧 Future Improvements

Implement Rule of 5 (copy/move constructors & assignment)

Add pop_back()

Add range-checking with at()

Add const-correctness

Add iterators for range-based loops

Add unit tests

🙌 Why This Exists

After being fluent in Python, I wanted to understand how memory and data structures work at a low level.
Building a vector from scratch forced me to confront:

pointers

heap allocation

memory copying

real C++ fundamentals

If you're learning C++ or want to understand STL internals, this project is a great starting point.
