#include <stdio.h>

#include <conio.h>

void main()

{

    int a[10], b[10], c[10], i, j, k;
    // clrscr();
    printf("enter d elements in set a:");
    for (i = 0; i < 5; i++)

    {
        scanf("%d", &a[i]);
    }
    printf("\nenter d elements in set b:");
    for (j = 0; j < 5; j++)

    {
        scanf("%d", &b[j]);
    }
    printf("\ncartessian product=");
    printf("{");
    for (i = 0; i < 5; i++)

    {
        for (j = 0; j < 5; j++)
        {

            printf("(%d,%d)", a[i], b[j]);

            printf(",");
        }
    }

    printf("}");

    // getch();
}