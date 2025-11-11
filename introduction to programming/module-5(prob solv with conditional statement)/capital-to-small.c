#include <stdio.h>
int main(){

char c;
scanf("%c", &c);
if (c >= 97)
{
    int sub = c-32;
    printf("%c", sub);
}
else if(c>=65){
    int sum=c+32;
    printf("%c", sum);
} 
    return 0;
}