#include<stdio.h>
int main()
{
    int l,h,i,c=0;
    int n,t;
    scanf("%d",&t);
    for(n=1;n<=t;n++)
    {
    scanf("%d%d",&l,&h);
    int count=0;
    while(l<h)
    {
        for(i=2;i<l;++i)
        {
            if(l%i==0)
            {
                c=1;
                break;
            }
            else
            {
                c=0;
            }

        }
                    if(c==0)
                              count++;
                ++l;
}
printf("%d\n",count);
 }
 return 0;
}

