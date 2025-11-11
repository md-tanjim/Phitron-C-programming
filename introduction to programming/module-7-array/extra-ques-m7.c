// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     int s = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             s++;
//         }
//     }
//     printf("total odd: %d\n", s);

//     return 0;
// }

// max value of an array
// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     int max = INT_MIN;
//     
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }

//     printf("%d ", max);

//     return 0;
// }


//min of array

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int max = 0;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
       
    }
    for (int i = 0; i < n; i++)
    {
       if (a[i]<min)
       {
        min = a[i];
       }
           
       
       
        
    }

   
       printf("%d ", min);
     

    return 0;
}