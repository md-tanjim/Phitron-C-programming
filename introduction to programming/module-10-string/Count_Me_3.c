#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a[10001];
        scanf("%s", a);
        int l = strlen(a);
        int cap = 0;
        int small=0;
        int digit=0;
        for (int i = 0; i < l; i++)
        {
            if (a[i] >= 65 && a[i] <= 90)
            {
                cap++;
            }
            else if (a[i] >= 97 && a[i] <= 122)
            {
               small++;
            }
            else{
                digit++;
            }
            
        }
        printf("%d %d %d\n", cap,small,digit);
    }

    return 0;
}

// #include <stdio.h>
// int main(){
//    char a[10001];
//    scanf("%s", a);
//    int l=strlen(a);
//    int cap=0;
//    for (int i = 0; i <l; i++)
//    {
//     if (a[i]>=65 && a[i]<=90)
//     {
//         cap++;
//     }

//    }printf("%d", cap);

//     return 0;
// }