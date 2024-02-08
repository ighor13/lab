#include <stdio.h>

typedef float elem;

int main(int argc, char* argv[])
{
    const unsigned m=3; //9
    const unsigned n=3; //8

    elem M[m][n];
    
    for(unsigned i=0;i<m;i++)
	for(unsigned j=0;j<n;j++)
	{
	    printf("M[%u][%u]:",i,j);
	    scanf("%f",&M[i][j]);
	}

    elem* e=M;
    for(unsigned i=0;i<m-1;i++)
	for(unsigned j=0;j<n;j++)
	    *(e+m*i+j)-=*(e+(m-1)*n+j);

    for(unsigned i=0;i<m;i++)
    {
	for(unsigned j=0;j<n;j++)
	    printf("%10.3f",M[i][j]);

	printf("\n");
    }
    
    return 0;
}