#include <stdio.h>
#include <math.h>
int main(){
   int n;
   scanf("%d", &n);
    int a[n][n];
   for (int i = 0; i < n; i++)
   {
     for (int j = 0; j < n; j++)
     {
       scanf("%d", &a[i][j]);
     }
     
   }
        int sum=0, sub=0;
    for (int i = 0; i < n; i++)
   {
     for (int j = 0; j < n; j++)
     {
       if (i==j)
       {
        sum += a[i][j];
       }
       if (i+j==n-1)
       {
        sub += a[i][j];
       }
       
       
     }
     
   }
   


   int diff = abs(sum-sub);
   printf("%d", diff);




    return 0;
}