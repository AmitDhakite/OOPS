#include<stdio.h>

int main()
{
    // MALLOC
    int *p = (int*)malloc(3 * sizeof(int));
    printf("%d", p);
    *p = 10;
    *(p+1) = 20;
    *(p+2) = 30;

    printf("%d, %d, %d", p[0], p[1], p[2]);

    // CALLOC
    int *p = (int*)calloc(3, sizeof(int));
    printf("%d", p);
    *p = 10;
    *(p+1) = 20;
    *(p+2) = 30;

    printf("%d, %d, %d", p[0], p[1], p[2]);

    // REALLOC
    int* p = (int*) malloc(3 * sizeof(int));
    *p = 10;
    *(p+1) = 20;
    *(p+2) = 30;

    int* newP = (int*) realloc(p, 6);
    *(newP+3) = 40;
    *(newP+4) = 50;
    *(newP+5) = 60;

    for(int i = 0; i < 6; i++)
        printf("%d ", newP[i]);
    return 0;
}


