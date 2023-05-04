#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm, temp;
    clrscr();
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    lcm = (num1 * num2) / gcd;

    printf("The HCF of %d and %d is %d\n", num1, num2, gcd);
    printf("The LCM of %d and %d is %d\n", num1, num2, lcm);
    getch();
    return 0;
}
