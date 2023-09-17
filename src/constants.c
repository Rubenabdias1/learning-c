#include <stdio.h>
#include <stdlib.h>

int main()
{

    const int FAV_NUM = 5;
    printf("%d", FAV_NUM);

    /*
        Pointer Trickery: If you have a pointer to its location in memory, it's
        theoretically possible to change the value by directly
        manipulating the memory.
        const int x = 42;
        int *ptr = (int *)&x;
        *ptr = 43; // Undefined behavior
    */
    return 0;
}