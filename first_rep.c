#include<stdio.h>
void main()
{
     int i,n,a[100],s,b[100],j,k=0,r=0,pos,srep;
      printf("enter the size\n");
      scanf("%d",&n);
      printf("enter the array\n");
       for(i=0;i<n;i++)
         {
              scanf("%d",&a[i]);
         }
                 for(i=0;i<n;i++)
                   { s=0;
                        for(j=0;j<n;j++)
                             {
                                if(a[i]==a[j])
                                s++;
                             }
                                 if(s>1)
                                  {
                                      b[k]=a[i];
                                      k++;
                                  }
                   }
pos=k;
srep=0;

for(i=0;i<k;i++)
{

    for(j=i+1;j<k;j++)
    {

        if(b[i]==b[j])
        {
            if(j<pos)
            {
                pos=j;
            }
        }


      if(j<pos&&j>srep)
          {
             srep=j;
          }
    }
}

    printf(" first repetition %d",b[srep]);

    }



