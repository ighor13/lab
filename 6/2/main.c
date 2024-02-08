#include <stdio.h>

typedef int elem;

int main(int argc, char* argv[])
{
    const unsigned m=4; //7
    const unsigned n=3; //7

    elem M[m][n];
    
    for(unsigned i=0;i<m;i++)
	for(unsigned j=0;j<n;j++)
	{
	    printf("M[%u][%u]:",i,j);
	    scanf("%d",&M[i][j]);
	}


    elem* e=M;
    for(unsigned j=0;j<n;j++)
    {
	int yn=-1;
        for(unsigned i=0;i<m-1;i++)
            if(*(e+n*i+j)>*(e+n*(i+1)+j))
        	yn=0;
	if(yn)
	    printf("%10c",'Y');
	else
	    printf("%10c",'N');
	
    }

    printf("\n");

    for(unsigned i=0;i<m;i++)
    {
	for(unsigned j=0;j<n;j++)
	    printf("%10d",M[i][j]);

	printf("\n");
    }
    
    return 0;
}