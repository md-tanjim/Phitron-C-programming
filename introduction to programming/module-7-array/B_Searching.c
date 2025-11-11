#include <stdio.h>
int main(){
   
    int n;
    scanf("%d", &n);
    int a[n];
    int x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);
     

    for (int i = 0; i < n; i++)
    {       

        
        
         if (x==a[i])
          {
            printf("%d", i);
            
          }

          else if (x!=a[i])
        {
            printf("-1");
            
        }


          
    }
    




    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    // printf("%d", x);

    
    



    return 0;
}