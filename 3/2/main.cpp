#include <iostream>

using namespace std;

typedef unsigned long int natural;

natural min(natural a, natural b, natural c)
{
    natural m=a;
    if(b<m) m=b;
    if(c<m) m=b;
    return m;
}

int main(int argc, char* argv[])
{
    natural a,b,c;

    cout<<"Input a:";
    cin>>a;
    cout<<"Input b:";
    cin>>b;
    cout<<"Input c:";
    cin>>b;

    natural m=min(a,b,c);
    
    natural i,nod;
    i=1;
    
    do
	if(a%i==0&&b%i==0&&c%i==0)
	    nod=i;
    while(i++<m);

    cout<<endl<<"Наименьший общий делитель: "<<nod<<endl;

    return 0;
}