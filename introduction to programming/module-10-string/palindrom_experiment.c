#include <stdio.h>
int main()
{
    char s[1000];
    scanf("%s", &s);
    int l = strlen(s);
    int a[l];
    int b[l];

    for (int i = 0; i < l; i++)
    {
        a[i] = s[i];
        // printf("%d", s[i]);
    }

    printf("\n");

    for (int j = l - 1; j >= 0; j--)
    {
        b[j] = s[j];
        // printf("%d", s[j]);
    }

    if (a[1000] == b[1000])
    {
        printf("yes");
    }

    // for (int i=0; i<l; i++)
    // {

    //     printf("%d", a[i]);
    // }

    // printf("\n");

    //  for (int i=0; i<l; i++)
    // {

    //     printf("%d", b[i]);
    // }

    return 0;
}
        // copy 2 array in another array
// int c[n + m];

// for
// {
//     (int i = 0; i < n; i++)

//         c[i] = a[i];
// }

// for (int i = 0; i < m; i++)

// {

//     c[i + n] b[i];
// }

//     for (int i = 0; i < n + m; i++)

// {

//     printf("%d", c[i]);
// }

// return 0;