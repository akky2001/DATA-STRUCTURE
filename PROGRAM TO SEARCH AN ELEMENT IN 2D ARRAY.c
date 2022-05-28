//PROGRAM TO FIND THE ELEMENT IN 2D ARRAY


#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[10][10],i,j,r,c,key,flag=0;
	
	printf("ENTER THE ROW AND COLUM OF THE MATRIX\n");
	scanf("%d %d",&r,&c);

	printf("ENTER THE ELEMENTS\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("ENTER TH KEY ELEMENTS TO BE SEARCHED\n");
	scanf("%d",&key);
	
	for(i=0;i<r;i++)
	   {
	    	for(j=0;j<c;j++)
	    	{
		    	if(arr[i][j]==key)
			      {
	                 flag=1;
			         break;	
			       }
			 
		    }
	    }
	if(flag==0)
	{
		printf("ELEMENT NOT FOUND!");
	}
	else
	{
		printf("ELEMENT IS FOUND\n");
	}
    getch();
}
