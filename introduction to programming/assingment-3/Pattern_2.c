#include <stdio.h>
int main(){
   int n;

   scanf("%d", &n);
   int a[n];
   int num=1;
   int space=n-1;

    for (int i = 0; i < n; i++)
    {
        for (int m = 0; m < space; m++)
        {
            printf(" ");
        }
        

        for (int j = num; j >= 1; j--)
    {
        printf("%d", j);
    }

        num++;
        space--;
        printf("\n");
    }
    
    















//    for (int i = 0; i < n; i++)
//    {  
    
//      for (int k = i; k >= 0; k--)
//      {
//         for (int j = num; j>0; j--)
//      {
//         printf("%d", j);
        
         
//      }
//      }

//     num--;
//     printf("\n");
//    }
   
    



    return 0;
}