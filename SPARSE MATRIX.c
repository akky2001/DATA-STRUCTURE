//READ A SPARSE MATRIX AND DISPLAY ITS REPRESENTATION

#include<stdio.h>
# define MAX 10               //global declaration
int main()
{
	int A[5][5],B[MAX+1][3],i,j,r,c,k;

     printf("Enter number of rows in the matrix \n ");
    scanf("%d",&r);
    printf("Enter number of columns in the matrix \n ");
    scanf("%d",&c);
	
	printf("ENTER THE MATRIX\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
    }

    printf("THE MATRIX IS\n");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  printf("%d\t",A[i][j]);
		}	
		printf("\n");
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if (A[i][j]!=0)
			{
				B[k][0]=i;
			    B[k][1]=j;
			    B[k][2]=A[i][j];
			    k++;		
			}
		}
	}
	B[0][0]=r;
	B[0][1]=c;	
	B[0][3]=k-1;
	
	printf("TRIPLET REPRESNETATION\n");
	
	for(i=0;i<k;i++)
	{
		printf("%d \t %d \t %d \n",	B[i][0],B[i][1],B[i][2]);
    }
}

