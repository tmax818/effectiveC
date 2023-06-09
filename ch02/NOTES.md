# chapter 2: objects, functions and types

>In this chapter, you’ll learn about objects, functions, and types. We’ll examine how to declare variables (objects with identifiers) and functions, take the addresses of objects, and dereference those object pointers. You’ve already seen some types that are available to C programmers. The first thing you’ll learn in this chapter is one of the last things that I learned: every type in C is either an object type or a function type.

## function types

>You should never declare functions with an empty parameter list in C.

> First, this is a deprecated feature of the language that may be removed in the future. Second, the code could be ported to C++, so explicitly list parameter types and use void when there are no parameters.