//PROGRAM TO APPEND TO ARRAY

#include<stdio.h>
#include<conio.h>
int main()
{
	int A[10],B[10],C[50],i,j,m,n;
	
	printf("ENTER THE NO OF ELEMENTS OF THE FIRST MATRIX\n");
	scanf("%d",&m);
    printf("ENTER THE ELEMENETS OF THE FIRST MATRIX\n");
    for(i=0;i<m;i++)
    scanf("%d",&A[i]);
    
    	
	printf("ENTER THE NO OF ELEMENTS OF THE SECOND MATRIX\n");
	scanf("%d",&n);
    printf("ENTER THE ELEMENETS OF THE SECOND MATRIX\n");
    for(i=0;i<n;i++)
    scanf("%d",&B[i]);
    
    for(i=0;i<m;i++)
    C[i]=A[i];
    
    for(j=0;j<n;j++)
    C[j+m]=B[j];
    
     printf("FIRST MATRIX\n");
    for(i=0;i<m;i++)
    printf("%d\n",A[i]);
    
     printf("SECOND MATRIX\n");
    for(i=0;i<n;i++)
    printf("%d\n",B[i]);
    
     printf("APPENDED MATRIX\n");
    for(i=0;i<m+n;i++)
    printf("%d\n",C[i]);
    
    return 0;
    
}
