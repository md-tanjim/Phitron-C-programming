#include <stdio.h>

void qwerty(int i){
    if (i==0)
    {
        return;
    }
    
    printf("%d\n", i);
    qwerty(i-1);
}
int main(){

   int i;
   scanf("%d", &i);
   qwerty(i); 



    return 0;
}