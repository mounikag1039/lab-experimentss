#include <stdio.h>
int main()
{
    float a, b;
    int c;
   printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("1. Add\n2. Sub\n3. Mul\n4. Div\nEnter choice: ");
    scanf("%d", &c);
    switch(c)
      {
        case 1:
            printf("Result = %.2f", a + b);
            break;
        case 2:
            printf("Result = %.2f", a - b);
            break;
        case 3:
            printf("Result = %.2f", a * b);
            break;
        case 4:
            if(b == 0) {
                printf("Division by zero is not possible");
            } else {
                printf("Result = %.2f", a / b);
            }
            break;
        default:
            printf("Invalid options");
    }
   return 0;
}
