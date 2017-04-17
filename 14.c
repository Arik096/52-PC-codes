#include<stdio.h>
int main()
{
          char c[10001],ch;
          int a,b;
          scanf("%d",&a);
          for(b=1;b<=a;b++)
          {
                    scanf(" %[^\n]",c);
                    fflush(stdin);
                    scanf("%c",&ch);
                    int i,count=0;
                    for(i=0;c[i]!='\0';++i)
                    {
                              if(ch==c[i])
                                        count++;
                    }
                   if(count>0)
                   {
                             printf("Occurrence of '%c' in '%s' = %d\n",ch,c,count);
                   }
                   else if(count==0)
                   {
                             printf("'%c' is not present\n",ch);
                   }
          }
          return 0;
}
