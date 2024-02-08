#include <iostream>
#include <math.h>

using namespace std;

typedef long double real;
typedef unsigned long int natural;

const real epsilon=0.2E-5;

real fact(natural n) // да, факториал - натуральное число, но происходит потеря точности при больших n для unsigned long int
{
	if(n==0)
	    return 1;
	else
	    return n*fact(n-1);
}

real f(real x)
{
    static natural n=1;

    real step=(powl(-1,n)*powl(x,2*n-1))/fact(2*n); n++;
    if(abs(step)<epsilon)
	return step;
    return step+f(x);
}

int main(int argc, char* argv[])
{
    typedef numeric_limits <real> accuracy;
    cout.precision(accuracy::max_digits10+2);

    cout<<f(5)<<endl;

    return 0;
}