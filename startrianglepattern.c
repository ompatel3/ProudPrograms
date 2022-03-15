#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the number : \n");
    scanf("%d", &n);
    m = n;

    for (int j = 1; j <= n; j++)
    {
        for (int i = (m-j); i < m; i++ )
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0; 
}