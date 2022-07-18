//PROGRAM TOMIMPLEMENT PATTERN MATCHIG ALGORITHM

#include<stdio.h>
#include<conio.h>
#include<string.h>

 void main()
 {
 	int str_length, pattern_length, i,j,count=0;
 	char str[30],pattern[30];
 	
 	printf("ENTER A STRING:\t");  //requesting the user to enter a string
 	gets(str);                    //get the string
 	
 	printf("ENTER THE PATTERN TO MATCH:\t");  //same as above
 	gets(pattern);
 	
 	//getting the legth of string and pattern
 	
 	str_length=strlen(str);
 	pattern_length=strlen(pattern);
 	
 	printf("PATTERN MATCH AT THE POSITION:\t");
 	
 	for(i=0;i<str_length - pattern_length;i++)
 	{
 		for(j=0;j<pattern_length;j++)
 		{
 			if(str[i+j] == pattern[j])
 		     count++;
	    }
	if(count==pattern_length)
	{
		printf("%d\t",i);
	}
 	count =0;
    }
    printf("\n");
    getch();
    
 }