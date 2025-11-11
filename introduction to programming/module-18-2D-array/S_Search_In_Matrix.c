#include <stdio.h>
#include <math.h>
int main(){
   int r,c;
   scanf("%d %d", &r, &c);
    int a[r][c];
   for (int i = 0; i < r; i++)
   {
     for (int j = 0; j < c; j++)
     {
       scanf("%d", &a[i][j]);
     }
     
   }
        int s,flag=0;
        scanf("%d", &s);
    for (int i = 0; i < r; i++)
   {
     for (int j = 0; j < c; j++)
     {
       
       if (a[i][j]==s)
       {
          flag++;
       }
     }
     //printf("\n");
   }
   

        if (flag==0)
        {
            printf("will take number");
        }
        else{
            printf("will not take number");
        }
   



    return 0;
}