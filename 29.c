#include<stdio.h>
#include<stdlib.h>
int main()
{
          int t,n;
          char c;
          scanf("%d",&t);
          fflush(stdin);
          for(n=1;n<=t;n++)
          {

                    scanf("%c",&c);
                    if(c>='a'&&c<='z')
                    {
                              printf("Lowercase character\n");
                    }
                    else if(c>='A'&&c<='Z')
                    {
                              printf("Uppercase character\n");
                    }
                    else if(c>='0'&&c<='9')
                    {
                              printf("Numerical Digits\n");
                    }
                    else
                    {
                              printf("Special charcter\n");
                    }
                    fflush(stdin);
          }
          return 0;
}
