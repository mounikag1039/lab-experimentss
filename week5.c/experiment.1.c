#include <stdio.h>
int main()
{
    int a, b, c, d, max, min;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a >= b && a >= c && a >= d) 
    {
        max = a;
    } 
    else if (b >= a && b >= c && b >= d)
    {
        max = b;
    } 
    else if (c >= a && c >= b && c >= d)
    {
        max = c;
    } 
    else
    {
        max = d;
    }
    if (a <= b && a <= c && a <= d) {
        min = a;
    } 
    else if (b <= a && b <= c && b <= d) {
        min = b;
    } 
    else if (c <= a && c <= b && c <= d) {
        min = c;
    } 
    else {
        min = d;
    }
    printf("Maximum number = %d\n", max);
    printf("Minimum number = %d\n", min);
    return 0;
}
