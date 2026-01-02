address_demo.cpp


In main, a address = 0x7fff160c46a0
Inside function, x value = 10
Inside function, x address = 0x7fff160c46a0

In main, b address = 0x7fff160c46a4
Inside function, x value = 20
Inside function, x address = 0x7fff160c46a4

 "So at runtime, the reference parameter x binds to the memory of the argument passed to the function.”

 
 {
 Argument → the variable used in the function call (a, b)
 Parameter → the function’s local name (x)
 }

+++++++++++++++++++++++++++++++++++++++++++++++++++++++

value_demo.cpp


In main, a address = 0x7fffe12ecf60
Inside function, x value = 10
Inside function, x address = 0x7fffe12ecf3c

In main, b address = 0x7fffe12ecf64
Inside function, x value = 20
Inside function, x address = 0x7fffe12ecf3c


Are the two &x values (from two calls) the same or different?
same - 0x7fffe12ecf3c

In pass-by-value, the parameter receives a copy of the argument’s value, so it does not bind to the argument’s memory

+++++++++++++++++++++++++++++++++++++++++++++++++++++++

CLAIRTY :

Pass by value
→ copy the value
→ new memory
→ no binding

Pass by reference
→ no copy
→ bind to existing memory
→ shared state