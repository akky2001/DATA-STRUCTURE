.//REVERSE A STRING USING POINTERS

#include<stdio.h>
#include<string.h>

//function to reverse a string using pointers

void reverse(char*str)
{
	int len,i;
	char *left,*right,ch; 
    len =strlen(str);        // to get the length of the string
    
    //set the left and right pointers to the starting of the string
    
	left=str;
	right=str;
	
	//move the right pointer to the starting of the string
	
	for (i = 0; i < len - 1; i++)
	right++;
	
	//swap the right and left character
	//index using left and right pointer
	
	for(i=0;i<len/2;i++)
	
//swap character

	{
	ch=*right;
	*right=*left;
	*left=ch;
	
	//update pointer position
	left++; 
	right--;
	
    }
}

//driver code
 
int main()
{
	char str[100];
	
	//get the string 
	
	printf("ENTER ANY STRING\n");
	gets(str);
	
	//reverse th string 
	
	reverse(str);
	
	//print the reverse string
	
	printf("REVERSE OF THE STRING:%s\n",str);
	return 0;
}
