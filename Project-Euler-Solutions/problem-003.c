#include <stdio.h>

int main(void) {
    long long number = 600851475143LL;
    long long largest_factor = 1;

    while (number % 2 == 0) {
        largest_factor = 2;
        number /= 2; // Sayiyi kucult
    }

    long long factor = 3;
    while (factor * factor <= number) {
        // Eger tam bolunuyorsa, bolunemeyene kadar bol
        while (number % factor == 0) {
            largest_factor = factor;
            number /= factor; // Sayiyi hizlica kucult
        }
        factor += 2; // Cift sayilari atlamak icin 2 artiriyoruz
    }

    if (number > 2) {
        largest_factor = number;
    }

    printf("600851475143 sayisinin en buyuk asal carpani: %lld\n", largest_factor);

    return 0;
}
