#include<stdio.h>
int main()
{
    // int i;
    // for(i=1;i<=20;i++)
    // {
    //     printf("%d\n",i);
    // }

    // int i;
    // for(i=1;i<=20;i++)
    // {
    //     printf("%d\n",i);
    // }

    // int i;
    // int n;
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
    //    if(i%2==0)
    //    {
    //     printf("%d-even\n",i);
    //    }
    //    else
    //    {
    //     printf("%d-odd\n",i);
    //    }
    // }

    // int i;
    // int n;
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
    //    printf("%d\n",i);
    //    if(i==5)
    //    {
    //     break;
    //    }   
    // }

    
    int i;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(i==5)
       {
        continue;
       } 
       printf("%d\n",i);  
    }
    return 0;
}