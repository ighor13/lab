#include <stdio.h>

using namespace std;

typedef int elem;

int main(int argc, char* argv[])
{
    const unsigned dim=5; //20

    elem A[dim];
    
    for(unsigned i=0;i<dim;i++)
    {
	printf("A[%u]:",i);
	scanf("%d",&A[i]);
    }

    for(unsigned i=0;i<dim;i++)
	if(A[i]%2==0)
	    A[i]*=A[i];
	else
	    A[i]*=2;

    for(unsigned i=0;i<dim;i++)
    {
        printf("A[%u]=%d\n",i,A[i]);
    }
    
    return 0;
}