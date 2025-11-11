#include <stdio.h>
int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);
    int a[n];
    
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int fre[100001] = {0};

    for (int i = 0; i < n; i++)
    {

        fre[a[i]]++;
    }
    for (int i = 1; i < m+1; i++)
    {
        printf("%d %d\n", i,fre[i]);
    }
    return 0;
}
