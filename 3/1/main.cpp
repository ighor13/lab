#include <iostream>

using namespace std;

typedef unsigned long int natural;

int main(int argc, char* argv[])
{
    natural a,b;

    cout<<"Input a:";
    cin>>a;
    cout<<"Input b:";
    cin>>b;
    
    for(natural i=1;i<a*b;++i)
    {
	if(i%a==0&&i%b==0)
	    cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}