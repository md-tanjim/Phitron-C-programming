#include <stdio.h>
#include <string.h>

char a[10000001];
int main(){


    
    scanf("%s", a);
    int f[10000]={0};
    //int ac=0;
    int l=strlen(a);
    for (int i = 0; i < l; i++)
    {
        // if (a[i]==97)
        // {
        //     f[97]++;
        // }
        f[ a[i] ]++;
        
        
    }
    for (int i = 97; i < 123; i++)
    {
       
        
        if (f[i]!=0)
        {
            
            printf("%c : %d\n",i, f[i]);
        }
        
        // printf("%d\n", f[i]);
        
        
    }
    




    return 0;
}