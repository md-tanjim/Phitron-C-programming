#include <stdio.h>
#include <string.h>

int main(){
   char a[100001];
   scanf("%s", a);
    char vow[5]={'a','e','i','o','u'};
    int l=strlen(a);
    int con=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (vow[i]==a[j])
        {
            con++;
        } 
        // printf("%d %d\n", i,j);
        }
        
        
    }
    printf("%d", l-con);



    return 0;
}