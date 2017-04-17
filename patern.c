#include<stdio.h>
int main()
{
          int r,s,c,n;
          scanf("%d",&n);

          for(r=1;r<=n;r++)
          {
                    for(s=r;s<=1;s++)
                    {
                              printf(" ");
                    }
                    for(c=1;c<=r;c++){
                              printf("* ");
                    }
                    printf("\n");
          }
          return 0;
}
