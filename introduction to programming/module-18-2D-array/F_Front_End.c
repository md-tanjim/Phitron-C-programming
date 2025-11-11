#include <stdio.h>
int main(){
   int n;
   scanf("%d", &n);
   int a[n]; 
   if (n%2!=0)
   {
    for (int i = 0; i < n; i++)
   {
    scanf("%d", &a[i]);
   }

   for (int i = 0,j=n-1; i < j; i++,j--)
   {
    printf("%d %d ",a[i],a[j] );
   }
   int fix = n/2;
   printf("%d", a[fix]);
   }

   
   else{
    for (int i = 0; i < n; i++)
   {
    scanf("%d", &a[i]);
   }

   for (int i = 0,j=n-1; i < j; i++,j--)
   {
    printf("%d %d ",a[i],a[j] );
   }
   
   }
   
   
   



    return 0;
}