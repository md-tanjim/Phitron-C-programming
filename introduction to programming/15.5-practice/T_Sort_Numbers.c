#include <stdio.h>
void sort(int a[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[j] < a[i])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[3];
    int copy[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
       copy[i] = a[i];
    }
    
    sort(a);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", copy[i]);
    }

    
    return 0;
}