#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH(ptr) (sizeof(ptr) / sizeof((ptr)[0]))

typedef struct {
   int a;
   int b;
} User;

void main() {

   typeof("c") str = "O";
   printf("%s", str);

}