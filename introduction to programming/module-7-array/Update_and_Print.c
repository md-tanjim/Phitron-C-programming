#include <stdio.h>
int main(){
  int n;
  int x,y;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  scanf("%d", &x);
  scanf("%d", &y);

  a[x] = y;
  for (int i = n-1; i>=0; i--)
  {
    printf("%d ", a[i]);
  }

    return 0;
}