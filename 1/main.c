#include <stdio.h>

int main(int argc, char* argv[])
{

    int c,d;
    float a,b;
    
    printf("enter b(float): )");
    scanf("%a",&b);
    printf("enter d(int): )");
    scanf("%d",&d);
    
    a=c=5;
    printf("a=%d, b=%f, c=%d, d=%f\n",a,b,c,d);
    a=a+b-2;
    printf("a=%d, b=%f, c=%d, d=%f\n",a,b,c,d);
    d=++c-a+d;
    printf("a=%d, b=%f, c=%d, d=%f\n",a,b,c,d);
    a=a*c--;
    printf("a=%d, b=%f, c=%d, d=%f\n",a,b,c,d);
    d=d*((c=c/2)+(b--)+(a=a/10));
    printf("a=%d, b=%f, c=%d, d=%f\n",a,b,c,d);
    
    return 0;
}