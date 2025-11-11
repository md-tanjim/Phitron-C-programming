#include <stdio.h>

int fun(int* p){
    *p = 20;
}
int main(){
    int x=10;
    fun(&x);
    printf("%d", x);
    



    return 0;
}