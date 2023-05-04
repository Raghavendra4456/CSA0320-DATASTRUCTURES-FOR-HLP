#include <stdio.h>
#include <math.h>

int isArmstrong(int n);

int main() {
    int n;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}

int isArmstrong(int n) {
    int sum = 0;
    int temp = n;
    int num_digits = floor(log10(n)) + 1;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }
    getch();
    return sum == n;
}
