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
        int val, lo, hi, result;
        pritnf("Enter value, lo, hi: ");
        scanf( "%d %d %d", &val, &lo, &hi);

        result = clamp (val, lo, hi);
        printf("clamp(%d, %d, %d) = %d\n", val, lo, hi, result );
    break;
            }
    case 2:
    break;
    case 3:
    break;
    case 4:
    break;
    case 5:
    break;
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
