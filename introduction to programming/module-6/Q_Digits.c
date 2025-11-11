// #include <stdio.h>
// int main(){
//   int n,x;
//   scanf("%d", &n);
// for(int i=1;i<=n;i++)
// {
//   scanf("%d", &x);
//   if (x==0)
//   {
//     /* code */printf("0");
//   }
  
//   while (x!=0){
//     printf("%d ", x%10);
//     x = x/10;

//   }
//   printf("\n");
// } 



//     return 0;
// }

#include <stdio.h>
int main(){
  int n,x;
  scanf("%d", &n);
for(int i=1;i<=n;i++)
{
  scanf("%d", &x);
 
  
  do {
    printf("%d ", x%10);
    x = x/10;

  }while (x!=0);
  
  printf("\n");
} 



    return 0;
}