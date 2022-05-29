#include <stdio.h>
int main()
{
    int a, b, result;
    result = 0;
    scanf("%d", &b);
    scanf("%d", &a);
    for(int i = 0; i < b; i++)
    {
        result = result + a;
    }
    printf("%d\n", result);
    return 0;
}