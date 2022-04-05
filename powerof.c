 #include <stdio.h>
#include <math.h>
 // Used for pow() function

int main()
{
    double base, expo, power;

    /* Input two numbers from user */
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &expo);

    /* Calculates base^expo */
    power =pow(base,expo);

    printf("%.2lf ^ %.2lf = %.2lf\n", base, expo, power);

    return 0;
}

/*gcc sphere.c -o exe -lm
The error you are seeing: error: ld returned 1 exit status is from the linker ld (part of gcc that combines the object files) because it is unable to find where the function pow is defined.

Including math.h brings in the declaration of the various functions and not their definition. The def is present in the math library libm.a. You need to link your program with this library so that the calls to functions like pow() are resolved.*/

