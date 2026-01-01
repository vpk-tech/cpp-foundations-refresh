**What actually happens when you “run a C++ program” ?**

When you write C++, your computer cannot run it.
say file name - **main.cpp**
It is just a text. The CPU understands machine code, not English syntax.

this is what happens : C++ source code  →  Compiler  →  Executable  →  CPU runs it

**Compiler ??** 
A compiler is a translator + judge.

Translate C++ into machine instructions
Enforce language rules
Catch mistakes before the program runs

_RUN :: g++ main.cpp -o main_
g++ -> compiler program
main.cpp -> input source file
-o main -> output executable called main (Note here name can be changed from main to anything)

