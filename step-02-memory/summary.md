At runtime, pass-by-value creates new memory and copies data

At runtime, pass-by-reference creates no new memory and binds to existing data

Reference parameters are created at call time, bound immediately, and destroyed on return

const int& means read-only access to the caller’s memory

The compiler plans, but binding happens while the program runs