#include<stdio.h>
void main()
{
    int a[10];
    int sum=0;
    int m=0;
    int tmp;
    int flag=1;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            for(int k=1;k<=9;k++)
              {
                  if(!(i==j||i==k||j==k))
                  { // printf("%d %d %d \n", i, j,k);
                      tmp=j*10+k;
                      sum=i*tmp;
                     /* a[i]++;
                      a[j]++;
                      a[k]++;*/
                      //printf("%d %d %d \n",i,tmp, sum);
                      int copy=sum;
                      int c=0;
                      while(copy>0)
                      {
                          int ld=copy%10;
                          //a[ld]++;
                          
                          c++;
                          copy/=10;
                      }
                      /*for(int q=1;q<=9;q++)
                      { 
                          printf("%d",a[q]);
                          printf("\n");
                          if(a[q]>1)
                         {flag=0;
                          break;
                         }
                         else flag=1;
                         printf("ok");*/
                      //}
                      //if(flag)
                        if(c==3)
                        {
                            copy=sum;
                            while(copy>0)
                            {
                                int ld =copy%10;
                                if(ld==i||ld==j||ld==k)
                                {flag=0;
                                break;}
                                else
                                flag=1;
                                copy/=10;
                            }
                        if(flag)
                        { int z[3];
                        int n=0;
                        copy=sum;
                          while(copy>0)
                      {
                          int ld=copy%10;
                          //a[ld]++;
                          z[n]=ld;
                          n++;
                          copy/=10;
                      }
                        if(!(z[0]==z[1]||z[0]==z[2]||z[1]==z[2]||z[0]==0||z[1]==0||z[2]==0))
                          {m++;
                              printf("%d %d %d \n",i, tmp, sum);}
                        }
                        
                          
                          
                         // printf("%d %d %d \n",i, tmp, sum);
                         // if(!(i==j||i==k||j==k))
                      }
                      //else
                      //continue;
                  }

             }

        }
    }
    printf("%d",m);
}

