#include <stdio.h>
#include <ncurses.h>

void clrscr();


int main(void)
{
    int *a, b;
    float *x, y = 3.5;
    double *m, n;
    initscr();
    printf(" Enter b = ");
    scanf("%d", &b);
    a = &b;
    x = &y;
    printf(" a = %p\tb = %d\n", a, b);
    getch();
    b -= y;
    printf(" a = %p\t*a = %d\tb = %d\n", a, *a, b);
    getch();
    m = a;
    printf(" a = %p\tm = %p\n", a, m);
    getch();
    m = &n;
    printf(" n = %p\tm = %p\n", &n, m);
    getch();
    n = 5.5;
    m++;
    printf(" n = %f\tn = %p\tm = %p\n", n, &n, m);
    getch();
    *m = (float) *a - n + (int) *x;
    printf(" m = %p\t*m = %f\n", m, *m);
    getch();
    m -= 1;
    printf(" n = %f n = %p m = %p *(m+1) = %f\n", n, &n, m, *(m+1));
    getch();
    return 0;
}