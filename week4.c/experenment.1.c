#include <stdio.h>
int main()
{
    int A = 10, B = 5, C = 2, D = 3, E = 4, F = 1, G = 2, i = 5;
    int result_a = A + B * C + (D * E) + F * G;
    printf("a. A + B * C + (D * E) + F * G = %d\n", result_a);
    int result_b = A / B * C - B + A * D / 3;
    printf("b. A / B * C - B + A * D / 3 = %d\n", result_b);
    int result_c = A++ + B-- - A;
    printf("c. A+++B---A = %d\n", result_c);
    int J = (i++) + (++i);
    printf("d. J = (i++) + (++i) = %d\n", J);
}
