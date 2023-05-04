#include <stdio.h>

int main() {
    int n, i, num, even_sum = 0, odd_sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        arr[i] = num;
        if(num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
    }

    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    if(even_sum > odd_sum) {
        printf("Even sum is larger\n");
    } else {
        printf("Odd sum is larger\n");
    }

    return 0;
}
