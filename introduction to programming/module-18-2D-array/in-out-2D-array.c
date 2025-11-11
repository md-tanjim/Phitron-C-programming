#include <stdio.h>
int main(){
   int r,c;
   scanf("%d %d", &r,&c); 
   int a[r][c];
   for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
        // printf("%d %d\n",i,j );
        scanf("%d", &a[i][j]);
    }
    
   }

   for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
        // printf("%d %d\n",i,j );
        printf("%d", a[i][j]);
    }
    
   }
//    int j=0;
//    for (int i = 0; i < c; i++)
//    {

//     printf("%d ",a[0][i] );
//    }
   
   
   



    return 0;
}