#include <iostream>
#include <math.h>

using namespace std;

template <typename typeC> class Point
{
    int x;
    int y;
}

template <typename typeC> bool checkequal(typeC x1,typeC y1,typeC x2,typeC y2,typeC x3,typeC y3)
{
    if((x1==x2&&y1==y2)||(x1==x3&&y1==y3)||(x2==x3&&y2==y3))
    {
	cout<<"имеют совпадения, ";
	return true;
    }
    return false;
}

template<typename typeC> bool checkline(typeC x1,typeC y1,typeC x2,typeC y2,typeC x3,typeC y3)
{
    typeC k=(y1-y2)/(x1-x2);
    typeC b=y1-k*x1;
    typeC y=k*x3+b;
    if(y3==y)
    {
	cout<<"лежат на одной прямой, ";
	return true;
    }
    return false;
}

int main(int argc, char* argv[])
{
    typedef long double coord;
    typedef numeric_limits <coord> accuracy;

    coord x1=1,y1=1,x2=M_PI,y2=M_PI,x3=7,y3=7;

    cout.precision(accuracy::max_digits10 + 2);
    cout<<"Точки x1="<<x1<<", y1="<<y1<<", x2="<<x2<<", y2="<<y2<<", x3="<<x3<<", y3="<<y3<<" ";
    if(checkequal(x1,y1,x2,y2,x3,y3)||checkline(x1,y1,x2,y2,x3,y3)) // да, порядок выполнения не определён, но да/нет сработает в любом случае
	cout<<"не ";
    cout<<"могут являться вершинами треугольника"<<endl;

    return 0;
}