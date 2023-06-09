   #include <stdio.h>

void swap(int, int); // defined in Listing 2-2
void swap2(int *pa, int *pb);

   int main(void) {
     int a = 21;
     int b = 17;

     swap(a, b);
     swap2(&a, &b);
     printf("main: a = %d, b = %d\n", a, b);
     printf("main a: %p\n", &a);
     printf("main b: %p\n", &b);
     return 0;
   }

void swap(int a, int b) {
  int t = a;
  a = b;
  b = t;
  
  printf("swap a: %p\n", &a);
  printf("swap b: %p\n", &b);
  printf("swap: a = %d, b = %d\n", a, b);
}

void swap2(int *pa, int *pb) {
int t = *pa;
*pa = *pb;
*pb = t;
return;
}