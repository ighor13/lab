#include <stdio.h>
#include <ncurses.h>

void clrscr();


int main(void)
{

    int *a, b;
    float *x, y = 3.5;
    double *m, n;
    printf(" Enter b = ");
    scanf("%d", &b);
    a = &b;								//ok
    x = &y;								//ok
    printf(" a = %p\tb = %d\n", a, b);
    b -= y;								// int=int-float ? ok но потеря точности
    printf(" a = %p\t*a = %d\tb = %d\n", a, *a, b);
    m = a;								// (double*) будет показывать на (int*) - в переменной непонятно что (значение, размеры значения)
    printf(" a = %p\tm = %p\n", a, m);
    m = &n;								// ok
    printf(" n = %p\tm = %p\n", &n, m);
    n = 5.5;								// ok
    m++;								// указатель показывает на непонятный кусок памяти m+1=&n+1
    printf(" n = %f\tn = %p\tm = %p\n", n, &n, m);
    *m = (float) *a - n + (int) *x;					// а теперь запись по непонятному адресу m+1 значения типа (float - double + int) -> double
    printf(" m = %p\t*m = %f\n", m, *m);
    m -= 1;								// m показывает обратно на n, а мы берем значение по адресу (m+1) - непонятно что записанное непонятно куда в предыдущей операции
    printf(" n = %f n = %p m = %p *(m+1) = %f\n", n, &n, m, *(m+1));
    return 0;
}