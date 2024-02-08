#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef int elem;

int main(int argc, char* argv[])
{
    const unsigned dim=5; //26

    elem* M[dim];
    
    for(unsigned i=0;i<dim;i++)
    {
	M[i]=(elem*)malloc(sizeof(elem));
	printf("M[%u]:",i);
	scanf("%d",M[i]);
    }

    for(unsigned i=0;i<dim;i++)
	if(*M[i]>0)
	{
    	    free(M[i]);
    	    M[i]=NULL;
    	    break;
	}

    for(unsigned i=0;i<dim;i++)
    {
	if(M[i])
	{
	    printf("M[%u]=%d\n",i,*M[i]);
	    free(M[i]);
	}
	else
	    printf("M[%u]=NULL\n",i);
    }
    
    return 0;
}