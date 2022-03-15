#include <stdio.h>
int main()
{
    int n, num = 1 , x,y;
    printf("Enter the number : ");
    scanf("%d", &n);
    x = n;
    y = n;
    for (int j = 1; j <= n; j++)
    {
        for (int k = j; k < y; k++)
        {
            printf(" ");
        }
        
        
        
        for (int i = (x-j); i < x; i++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    
    return 0; 
}