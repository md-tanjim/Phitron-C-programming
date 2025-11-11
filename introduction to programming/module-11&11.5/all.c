#include <stdio.h>
int main(){
   int n;
   scanf("%d", &n);
   int a[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d", &a[i]);
   }

   for (int i = 0; i < 10; i++)
   {  int count=0;
    for (int j = 0; j < n; j++)
    {
        if (i==a[j])
        {
            count++;
        }
        //printf("%d %d\n",i,a[j] );

    }
    printf("%d -> %d\n",i, count);

   }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     int m;
//     scanf("%d", &m);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int fre[10000] = {0};

//     for (int i = 0; i < n; i++)
//     {

//         fre[a[i]]++;
//     }
//     for (int i = 0; i < m; i++)
//     {
//         printf("%d -> %d\n", i, fre[i]);
//     }
//     return 0;
// }
