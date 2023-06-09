#include <stdio.h>

void my_func(){}

int main(){

    void *ptr = my_func;; 

    printf("%p\n", my_func);
    printf("%p\n", ptr);

    return 0;

}