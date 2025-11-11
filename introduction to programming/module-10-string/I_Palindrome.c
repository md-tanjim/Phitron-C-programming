#include <stdio.h>
#include <string.h>

int main(){
    char a[1001];
     char copy[1001];
    scanf("%s", a);
    int l=strlen(a);
    for (int i = 0; i < l; i++)
    {
       copy[i] = a[i];
    }
    for (int i = 0, j=l-1; i < j; i++,j--)
    {
        int tmp = a[i];
        a[i]=a[j];
        a[j]=tmp;
        printf("%c %c",a[i],a[j] );
    }
   
    int flag=1;
   for (int i = 0; i < l; i++)
   {
      if (a[i]!=copy[i])
      {
        flag = 0; break;
      }
   }
   
   if (flag==1)
   {
    printf("YES");
   }
   else{
    printf("NO");
   }
   
    
    

    



    return 0;
}