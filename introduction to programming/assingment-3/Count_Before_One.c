#include <stdio.h>

int count_before_one(int a[], int n)
{  int flag=0;
   for (int i = 0; i < n; i++)
   {
    if (a[i]!=1)
    {
        flag++;
    }
    else if (a[i]==1)
    {
       break; 
    }
    
    
   }
   return(flag);
}


int main(){
   int n;
   scanf("%d", &n);
   int a[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d", &a[i]);
   }
  int recever =  count_before_one(a,n);
   printf("%d", recever);


    return 0;
}