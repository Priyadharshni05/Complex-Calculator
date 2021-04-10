#include <stdio.h>
#include "complex_calculator.h"
int main()
{
    int choice;
    complex_t a = {1, 1}, b = {1, 1}, c = {1, 1};
    printf("Complex calculator\n");
    printf("Select your choice from the options given below\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: complexAdd(&a, &b, &c); break;
        case 2: complexSub(&a, &b, &c); break;
        case 3: complexMul(&a, &b, &c); break;
        case 4: complexDiv(&a, &b, &c); break;
        case 5: break;
    }
    printf("%f %f\n\n", c.real, c.imaginary);
    test_main();
    return 0;
}
