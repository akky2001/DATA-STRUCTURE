
// function that receive a sorted array of integers and an integer value, and inserts the value in its correct place.

#include<stdio.h>
#include<conio.h>

void main()
{
 int a[100],n,m,*p,temp=0,i,j;
 p=a;
 printf("\n ENTER A LIMIT OF ARRAY:");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  printf("\n\nELEMENT[%d]:",i+1);
  scanf("%d",p);
  p++;
 }
 p=a;
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    p++;
   }
  }
 }

 printf("\nSorted array\n");
 p=a;
 for(i=0;i<n;i++)
 {
   printf("%d\n",*p);
   p++;
 }

 printf("\n Enter a new element:");
 scanf("%d",&m);
 a[n]=m;
 n=n+1;

 p=a;
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    p++;
   }
  }
 }

 printf("\nNew Sorted array\n");
 p=a;
 for(i=0;i<n;i++)
 {
   printf("%d\n",*p);
   p++;
 }
 getch();
}
