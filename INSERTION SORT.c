//program to implement insertion sort

#include<stdio.h>
#include<conio.h>
int main()
  {
  	int arr[25],i,j,temp,limit;
  	
  	printf("ENTER THE LIMIT OF ARRAY\n");
  	scanf("%d",&limit);
  	
  	printf("ENTER THE ELEMENTS INTO THE ARRAY\n");
  	
  	for(i=0;i<limit;i++)
  	 { 
  	     scanf("%d",&arr[i]);
	 }
	 
	printf("THE ARRAY IS :\n");
		for(i=0;i<limit;i++)
	  {
	  	printf("%d\t",arr[i]);
	  }
	  
	 printf("\n");
	  	for(i=0;i<limit;i++)
	  	{
	  		temp=arr[i];
	  		
	  		j=i-1;
	  		  
	  		while((temp<arr[j])&&(j>=0))
	        {
            arr[j+1]=arr[j];
            j=j-1;
            }
          arr[j+1]=temp;
		}
		
		printf("THE SORTED ARRAY IS: \n");
        for(i=0;i<limit;i++)
        printf("%d\t",arr[i]);

   return 0;
  }
