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
       int flag=0;
   if (r==c)
   {
      for (int i = 0; i < r; i++)
   {
    for (int j = 0; j < c; j++)
    {
        if (i!=j)  //  if (i+j!=r-1)
        {
            if (a[i][j]!=0)
            {
                flag++;
               
            }
            
        }

        
    }
    
   }
        if (flag==0)
        {
            printf("it's a diagonal");
        }
        else{
                printf("not a diagonal");
        }
        
   }


   else{
    printf("not a diagonal");
   }
   

   
   
   



    return 0;
}