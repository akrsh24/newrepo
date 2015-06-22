#include<stdio.h>
void main()
{
int a[100],rep,n,i,b[100],s,j,r,k=0;
printf("enter the limit\n");
scanf("%d",&n);
printf("enter the array\n");
for(i=0;i<n;i++)
     {
    scanf("%d",&a[i]);
     }
for(i=0;i<n;i++)
{ s=0;
    for(j=i;j<n;j++)
    {
        if(a[j]==a[i])
        {
           s++;
                }

   if(s>1)
   {b[i]=a[i];
   k++;
   }
}
}
//rep=b[0];
for(i=0;i<k;i++)
{
printf("%d",b[i]);
}
}
 /*rep=b[i];
    for(j=1;j<r;j++)
 {
    if(b[j]!=rep)
    k++;

 }

}
 printf("\nfirst repetition%d",b[j]);

}
*/
