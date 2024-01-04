//Pass by value in C is a mechanism of passing function arguments where a copy of the argument's value is passed to the function.
#include <stdio.h>

void addOne(int x) {
   x = x + 1;
   printf("Inside the function: x = %d\n", x);
}

int main() {
   int a = 5;
   addOne(a);
   printf("Outside the function: a = %d\n", a);
   return 0;
}
//Pass by reference in C is a mechanism of passing function arguments where the memory address of the argument is passed to the function, allowing changes to be made to the original variable.
#include <stdio.h>

void addOne(int *x) {
   *x = *x + 1;
   printf("Inside the function: *x = %d\n", *x);
}

int main() {
   int a = 5;
   addOne(&a);
   printf("Outside the function: a = %d\n", a);
   return 0;
}
