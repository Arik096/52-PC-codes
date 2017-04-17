#include<stdio.h>
int main()
{
          int n,t;
          scanf("%d",&t);
          for(n=1;n<=t;n++)
          {
                    float a,b,c,d,cc,rc;
                    scanf("%f%f%f",&a,&b,&c);
                    d=300-c;
                    cc=(b/d)*6;
                    rc=((a-b+1)/c)*6;
                    printf("%.2f %.2f\n",cc,rc);
          }
          return 0;
}
