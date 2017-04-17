#include<stdio.h>
int main()
{
          int n,t;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    int a;
                    long long int f=1,l;
                    scanf("%d",&a);
                    if(a<=20)
                    {
                    for(l=2;l<=a;l++)
                    {
                              f=f*l;
                    }
                    int u,count=0;
                    while(f>0)
                    {
                              u=f%10;
                              if(u==0)
                              {
                                        count++;
                              }
                              else
                              {
                                        break;
                              }
                              f=f/10;
                    }
                    printf("%d\n",count);
          }
          else
          {
                    int count,o;
                    if(a<25)
                    {
                              a=a/5;
                              printf("%d",a);
                    }
                    else if(a<=100)
                    {
                              count=a/5;
                              o=a/25;
                              a=count+o;
                              printf("%d",a);
                    }
          }
          }
          return 0;
}
