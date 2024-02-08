#include <iostream>
#include <math.h>

using namespace std;

template <typename typeC> class Point
{
    public:
	Point( typeC x, typeC y) { _x=x;_y=y; };
	Point() {};
	typeC &x( typeC x) { return _x=x; };
	typeC &x() { return _x; };
	typeC &y( typeC y) { return _y=y; };
	typeC &y() { return _y; };

    private:
	typeC _x;
	typeC _y;
};

template <typename typeC> bool checkequal(Point<typeC> p1, Point<typeC> p2, Point<typeC> p3)
{
    if((p1.x()==p2.x()&&p1.y()==p2.y())||(p1.x()==p3.x()&&p1.y()==p3.y())||(p2.x()==p3.x()&&p2.y()==p3.y()))
    {
	cout<<"имеют совпадения, ";
	return true;
    }
    return false;
}

template<typename typeC> bool checkline(Point<typeC> p1, Point<typeC> p2, Point<typeC> p3)
{
    typeC k=(p1.y()-p2.y())/(p1.x()-p2.x());
    typeC b=p1.y()-k*p1.x();
    typeC y=k*p3.x()+b;
    if(p3.y()==y)
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
    Point<coord> p1(1,1),p2(M_PI,M_PI),p3(7,7);
    
    cout.precision(accuracy::max_digits10 + 2);
    cout<<"Точки x1="<<p1.x()<<", y1="<<p1.y()<<", x2="<<p2.x()<<", y2="<<p2.y()<<", x3="<<p3.x()<<", y3="<<p3.y()<<" ";
    if(checkequal(p1,p2,p3)||checkline(p1,p2,p3)) // да, порядок выполнения не определён, но на да/нет сработает в любом случае
	cout<<"не ";
    cout<<"могут являться вершинами треугольника"<<endl;

    p1.x()=1;p1.y()=1;p2.x()=1;p2.y()=1;p3.x()=5;p3.y()=7;
    cout<<"Точки x1="<<p1.x()<<", y1="<<p1.y()<<", x2="<<p2.x()<<", y2="<<p2.y()<<", x3="<<p3.x()<<", y3="<<p3.y()<<" ";
    if(checkequal(p1,p2,p3)||checkline(p1,p2,p3))
	cout<<"не ";
    cout<<"могут являться вершинами треугольника"<<endl;

    p1.x()=1;p1.y()=2;p2.x()=3;p2.y()=4;p3.x()=5;p3.y()=7;
    cout<<"Точки x1="<<p1.x()<<", y1="<<p1.y()<<", x2="<<p2.x()<<", y2="<<p2.y()<<", x3="<<p3.x()<<", y3="<<p3.y()<<" ";
    if(checkequal(p1,p2,p3)||checkline(p1,p2,p3))
	cout<<"не ";
    cout<<"могут являться вершинами треугольника"<<endl;

    return 0;
}