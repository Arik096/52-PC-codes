    #include <stdio.h>
    int main()
    {
              int t,y;
              scanf("%d",&t);
              for(y=1;y<=t;y++)
              {
        int i,j;
        char w[1001];
        scanf(" %[^\n]",w);
        int l=strlen(w);
        for(i=0;i<l;++i)
          {
          int ws=-1;
          int we=-1;
          if(w[i] != ' ')
          {
            ws=i;
            for(j=ws;j<l;++j)
             {
              if(w[j]==' ')
              {
                we=j-1;
                break;
              }
            }
            if(we==-1)
              we=l-1;
            for(j=ws;j<=(we+ws)/2;++j)
            {
              char temp=w[j];
              w[j] = w[we-(j-ws)];
              w[we-(j-ws)] =temp;
            }
            i=we;
          }
        }
        printf("%s\n",w);
    }
    return 0;
    }
