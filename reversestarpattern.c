#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the number : \n");
    scanf("%d", &n);
    m = n;

    for (int j = 1; j <= n; j++)
    {
        for (int i = 0; i < m; i++ )
        {
            printf("*");
        }
        
        m = m - 1;
        printf("\n");
        
    }
    
    return 0; 
}