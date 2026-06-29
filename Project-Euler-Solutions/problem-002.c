#include <stdio.h>

int main()
{
    int first = 1;
    int second = 2;
    int next;
    int sum = 0;
    int term = 1;

    while (first <= 4000000){
        printf("%2d. Fibonacci term = %d", term, first);

        if (first % 2 == 0){
            printf("  <-- Even");
            sum += first;
        }

        printf("\n");

        next = first + second;
        first = second;
        second = next;

        term++;
    }

    printf("\nSum of even Fibonacci numbers = %d\n", sum);

    return 0;
}
