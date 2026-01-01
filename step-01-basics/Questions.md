**Why is printNumbers above main?**

C++ is read top to bottom
When the compiler reaches main, it must already know about printNumbers
Since the function body appears earlier, the compiler is satisfied

Two correct ways to do this:

Way 1 (as in code)
Define the function before main

Way 2 
Declare function first, define later

++++++++++++++++++++

**Why does the loop start at 1 and not 0?**
“The loop start depends on the domain of the problem, not the language.”

**What happens if n = 0?**
Loop body never execute (Example of a guarded loop)

**What happens if n is negative?**
no input validation

**Remove cin >> n; and check**
n becomes uninitialized and it contains garbage memory
Using it is a undefined behavior

**Change int n to char n** -> Weird Output
char typically holds 1 byte
Input like 5 becomes ASCII '5' → value 53
Loop runs up to 53, not 5

