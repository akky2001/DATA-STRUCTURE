//BUBBLE SORT

#include<stdio.h>
#include<conio.h>
int main()
{
	int A[10],i,j,temp,limit;
	
	printf("ENTER THE LIMIT\n");
	scanf("%d",&limit);
	
	printf("ENTER THE ELEMENTS TO ARRAY\n");
	for(i=1;i<=limit;i++)
	{
		scanf("%d",&A[i]);
	}
	
    for(j=1;j<=limit;j++)
    {
     for(i=1;i<=limit-j;i++)
     {
       if(A[i]>A[i+1])
       {
       	temp=A[i];
       	A[i]=A[i+1];
       	A[i+1]=temp;
	   }
     }
    }	
	printf("Elements after sorting\n");
      for(i=1;i<=limit;i++)
       {
        	printf("%d\t",A[i]);
        }
       
   getch();
}