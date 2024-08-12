#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// #include "maths.c"

typedef char user[25];
typedef struct {
    int id;
    char name;
} User;

enum Day{Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6, Sun = 7};

void main() {

    User* pUser = NULL;                                                 // Structs Maaalloc
    pUser = (User*)malloc(sizeof(User));
    if (pUser == NULL) {
        printf("Out of memory");
    } else {
        printf("Allocation successful %p\n", pUser);
        scanf("%s %d", &pUser -> name, &pUser -> id);
        free(pUser);
        printf("%s %d", pUser -> name, pUser -> id);
    }


    // char* stack = calloc(10, sizeof(char));  //== Stack of 10 char
    // realloc(stack, 10 * sizeof(char));       //== Now stack of 15 char

    int* arr;
    User user1;

    arr = (int*)calloc(15, sizeof(int));
    realloc(arr, 20 * sizeof(int));

    printf("%d", user1);
}




