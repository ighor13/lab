#include <iostream>
#include <math.h>

using namespace std;

typedef long double typeP;

typedef numeric_limits <typeP> accuracy;

typeP x(typeP a,typeP b)
{
    return
	a>10?
	    (a-b)
	    :
	    (0<a&&a<=10&&b>0)?
		((a-b)/(a+b))
		:
		b
	;
}

int main(int argc, char* argv[])
{
    cout.precision(accuracy::max_digits10 + 2);
    try
    {
        cout<<"a=11, b=2, x(a,b)="<<x(11,2)<<endl;
        cout<<"a=2, b=1, x(a,b)="<<x(2,1)<<endl;
        cout<<"a=-11, b=2, x(a,b)="<<x(-11,2)<<endl;
        cout<<"a=2, b=-2, x(a,b)="<<x(2,-2)<<endl;
    }
    catch(...)
    {
	cout<<"функция не определена"<<endl;
    }
    return 0;
}