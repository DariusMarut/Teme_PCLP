// Scrieți un program care citește un număr natural n și care să calculeze și să afișeze suma S a tuturor numerelor obținute prin rearanjarea cifrelor lui n.

#include <stdio.h>

int main() {
    long long int n, sc = 0, nc = 0, x = 0, f = 1, S;
    
    printf("Introdu un numar natural: ");
    
    if (scanf("%lld", &n) == 1) {
        if (n == 0) {
            printf("Rezultatul este: 0\n");
        } else {
            while (n) {
                nc++;
                f = f * nc;
                x = x * 10 + 1;
                sc = sc + n % 10;

                n /= 10;
            }
            f = f / nc;
            S = f * x * sc;
            printf("Rezultatul este: %lld\n", S);
        }
    } else {
        printf("Erore la citirea numarului!\n");
    }

    return 0;
}
