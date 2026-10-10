// Se dă un număr natural n. Determinaţi câte cifre are suma cifrelor sale.

#include <stdio.h>

int main() {
    long long int n, sc = 0, nc = 0;
    
    printf("Introdu un numar natural: ");
    
    if (scanf("%lld", &n) == 1) {
        while (n) {
            sc = sc + n % 10;

            n /= 10;
        }

        while (sc) {
            nc++;
            sc /= 10;
        }

        printf("Rezultatul este: %lld\n", nc);
    } else {
        printf("Erore la citirea numarului!\n");
    }

    return 0;
}
