#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        x[i]=a[i];
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int tmp = a[i];
        a[i]=a[j];
        a[j]=tmp;
    }

   int flag =1;
   for (int i = 0; i < n; i++)
   {
    if (a[i] != x[i])
    {
        flag = 0;
        break;
    }
    
   }

        if (flag == 1)
        {
            printf("YES");
        }
        else{
            printf("NO");
        }
        
   

    return 0;
}