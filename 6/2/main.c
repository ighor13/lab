#include <stdio.h>

typedef int elem;

int main(int argc, char* argv[])
{
    const unsigned m=3; //7
    const unsigned n=3; //7

    elem M[m][n];
    
    for(unsigned i=0;i<m;i++)
	for(unsigned j=0;j<n;j++)
	{
	    printf("M[%u][%u]:",i,j);
	    scanf("%d",&M[i][j]);
	}

    for(unsigned i=0;i<m;i++)
    {
	for(unsigned j=0;j<n;j++)
	    printf("%10d",M[i][j]);

	printf("\n");
    }
    
    return 0;
}