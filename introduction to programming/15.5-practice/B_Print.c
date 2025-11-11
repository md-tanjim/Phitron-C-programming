#include <stdio.h>
int loop(int n)
{ 
    for (int i = 1; i <=n; i++)
    {
      printf("%d ", i);
    }
    

}
int main(){
   int n;
   scanf("%d", &n);
   loop(n); 



    return 0;
}