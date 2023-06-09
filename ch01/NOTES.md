# chapter 1:

>The main function defines the main entry point for the program that’s executed in a *hosted* environment when the program is invoked from the command line or from another program.

freestanding and hosted environments

[hello.c](hello.c)

```c
#include <stdio.h>
#include <stdlib.h>


int main(void) {

  puts("Hello, world!");
  return EXIT_SUCCESS;
  
}
```

## checking function return values

[hello2.c](hello2.c)

>The printf function returns the number of characters printed if it’s successful, or a negative value if an output or encoding error occurred. You can try modifying the “Hello, world!” program to use the printf function as an exercise.

[hello3.c](hello3.c)