#include <iostream>
#include <math.h>

using namespace std;

typedef long double typeP;

// M_PI может быть не пределена в разных реализациях, но можно, конечно, и её
#define PI (acosl(-1))

typeP y(typeP x)
{
    if(x<0) // логарифм определён при x>0
	throw (char*)"x не может быть меньше 0";
    if((1/(2*log(x))+powl(sin(powl(x,2)),2))==0) // знаменатель не можеть быть = 0
	throw (char*)"знаменатель дроби равен 0";
    return
	(
	    (2*cosl(x-PI/6)+sqrtl(2))
	    /
	    (1/(2*logl(x))+powl(sinl(powl(x,2)),2))
	)
	*expl(3*x)
    ;
}

int main(int argc, char* argv[])
{
    cout<<"Введите x:";
    typeP x;
    cin>>x;
    typedef numeric_limits <typeP> accuracy;
    cout.precision(accuracy::max_digits10 + 2);
    try
    {
        cout<<"y("<<x<<")="<<y(x)<<endl;
    }
    catch(char* err)
    {
	cout<<"функция не определена, "<<err<<endl;
    }
    catch(...)
    {
        cout<<"функция не определена"<<endl;
    }
    return 0;
}