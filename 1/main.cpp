#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{

    int c,d;
    float a,b;
    
    cout<<"input b:"; cin>>b;
    cout<<"input d:"; cin>>d;
    
    a=c=5;
    cout<<"a="<<a<<";b="<<b<<";c="<<c<<";d="<<d<<endl;
    a=a+b-2;
    cout<<"a="<<a<<";b="<<b<<";c="<<c<<";d="<<d<<endl;
    d=++c-a+d;
    cout<<"a="<<a<<";b="<<b<<";c="<<c<<";d="<<d<<endl;
    a=a*c--;
    cout<<"a="<<a<<";b="<<b<<";c="<<c<<";d="<<d<<endl;
    d=d*((c=c/2)+(b--)+(a=a/10));
    cout<<"a="<<a<<";b="<<b<<";c="<<c<<";d="<<d<<endl;
    
    return 0;
}