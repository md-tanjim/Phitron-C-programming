#include <stdio.h>
int main(){
   int n;
   scanf("%d", &n);

for (int i = 1; i <=n; i++)
{    
    int f=n%i;
   if (f==0)
   {
    printf("%d\n", i);
   }


}
    return 0;
}