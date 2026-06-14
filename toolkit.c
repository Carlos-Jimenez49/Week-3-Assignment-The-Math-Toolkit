#include <stdio.h>
#include <mathlib.h>

int main () {
int option = 0;
while (option ! = 7) {

printf( "= Math Toolkit =\n");
printf ("1. Clamp a value\n");
printf("2. Compute a power\n");
printf("3. Prime check\n");
printf("4. GCD\n");
printf("5. Array average\n");
printf("6. Count digits\n");
printf("7. Quit\n");
printf("Enter choice (1-7): ");

scanf( "%d", &option);

switch (option) {
    case 1: {
        int value, lo, hi, result;
        printf("Enter value, lo, hi: ");
        scanf( "%d %d %d", &value, &lo, &hi);

        result = clamp (val, lo, hi);
        printf("clamp(%d, %d, %d) = %d\n", value, lo, hi, result );
    break;
            }
    case 2: {
        double base, result;
        int exp;
        printf("Enter base and exponent: ");
        scanf("%lf %d", &base, &exp);

        result = power (base, exp);
        printf("power(%.2f, %d) = %.2f", base, exp, result);

    break;
        }
    case 3: {
        int n, result;
        printf("Enter n: ");
        scanf("%d", &n);

        result = is_prime(n);
        if (result == 1) {
            printf("%d is prime.\n", n);
        }
        else {
            printf("%d is NOT prime.\n", n);
        }
    
    break;
}
    case 4: {
        int a, b, result;
        printf("Enter a and b: ");
        scanf("%d %d", &a, &b );

        result = gcd(a, b);
        printf(" gcd(%d, %d) = %d\n", a, b, result);
    break;
    }
    case 5: {
        int value [100];
        int len;
        double result;
        printf("Enter count then values: ");
        scanf("%d", &len);
        for (int i = 0; i < len; i++) {
            scanf("%d", &value[i]);
        }
        result = average(value, len);
        printf("average = %.2f", result);
    break;
    }
    case 6:
    break;
    case 7:
    printf("Goodbye!\n");
    break;

    default:
    break;
                }
                    }        
return 0;
            }
