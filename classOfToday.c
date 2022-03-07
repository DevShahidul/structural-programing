#include<stdio.h>
#include<conio.h>
void main()
{
    int amm[]={5,8,1,7,4,2,10,5};
    int i,minp=0,maxp=0,sum=0,count=0;
    for(i=0;i<=7;i++)
    {
        if(amm[i]<amm[minp])
        {
            minp=i;
        }
    }
    printf("Index number of Minimum element: %d\n",minp);
    for(i=0;i<=7;i++)
    {
        if(amm[i]>amm[maxp])
        {
            maxp=i;
        }
    }
    printf("Index number of Maximum element: %d\n",maxp);
     if(maxp<minp)
     {
       for(i=maxp+1;i<=minp-1;i++)
       {
        sum=sum+amm[i];
       }
     }
     else{

        for(i=minp+1;i<=maxp-1;i++)
       {
        sum=sum+amm[i];
       }

     }

    printf("sum=%d\n",sum);

    printf("Even Number: ");
     for(i=0;i<=7;i++)
       {
          if(amm[i]%2==0)
          {
              printf("%d ",amm[i]);
              count++;
          }
       }
       printf("\nTotal Even Numbet is:%d\n",count);






    getch();
}

