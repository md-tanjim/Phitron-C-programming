#include <stdio.h>
int main(){
   int n;
   int x=0;
   int y=0;
   scanf("%d", &n);
    int a [n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

    }
    for (int i = n-1; i>= 0; i--)
    {
        if (a[i]>0)
        {
            x+=a[i];
          
        }
        else if (a[i]<0)
        {
          y+=a[i];
        }

        
        
        
        
    } 

    printf("%d ", x);
    printf("%d ", y);



    return 0;
}