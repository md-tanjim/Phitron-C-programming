#include <stdio.h>
#include <string.h>
int is_palindrome(char a[],int l){
    char copy[l];
    for (int i = 0; i <= l; i++)
    {
        copy[i] = a[i];
    }
    int flag = 0;
    for (int i = 0, j = l - 1; i < j; i++, j--)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        // printf("%c %c", a[i], a[j]);
    }
    for (int i = 0; i < l; i++)
    {
        if (a[i] != copy[i])
        {
            flag = 1;
            break;
        }
    }
    
         
    return(flag);
}
int main()
{
    char a[1001];

    scanf("%s", &a);
    int l = strlen(a);
    int f= is_palindrome(a,l);
    if (f == 0)
    {
        printf("Palindrome");
    }
    else if (f != 0)
    {
        printf("Not Palindrome");
    }

    return 0;
}