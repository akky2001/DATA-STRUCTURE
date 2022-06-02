//IMPLEMENTATION OF STACK USING ARRAY

#include<stdio.h>
int stack[100],i,j,choice=0,top=-1,n;
void push();
void pop();
void display();
void main()
{
	printf("ENTER THE SIZE OF ARRAY\n");
	scanf("%d",&n);
	
	while(choice!=4)
	{
		printf("CHOOSE ANY ONE FROM THE BELOWQ OPERATIONS\n");
		printf("1.PUSH\n2.POP\n3.DISPLAY\nEXIT\n");
		printf("ENTER ANY CHOICE\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			  	{
			  	push();
			  	break;
				}
			case 2:
				{
					pop();
					break;
				}
			case 3:
				{
					display();
					break;
				}
			case 4:
				{
				  printf("Exiting....");  
                break; 
				}
			deafault:
				{
					printf("please enter valid choice\n");
				}	
		};
		
	}
}

 //push operation 
 
void push()
{
	int val;
	if(top==n-1)
	{
		printf("STACK OVERFLOW\n");
	}
	else
	{
		printf("ENTER THE VALUE TO BE INSERTED\n");
		scanf("%d",&val);
		top++;
		stack[top]=val;
	}
}
 //pop operation 
 
void pop()
{
	if(top==-1)
    {
    	printf("STACK UNDERFLOW\n");
    }
    else
    {
    
        printf("\n\t The popped elements is %d\n",stack[top]);
        top--;
    }
}

//display operation

void display()
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}



 
