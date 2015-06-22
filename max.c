#include<stdio.h>
void main()
{
int a[100],n,i,max,min;
printf("enter the size\n");
scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
 max=a[0];
 min=a[n-1];

for(i=0;i<n;i++)
{
     if(a[i]>max)

    max=a[i];

 if(a[i]!=max&&a[i]>min)

min=a[i];
}
printf("%d",max);
  printf("%d",min);


}
