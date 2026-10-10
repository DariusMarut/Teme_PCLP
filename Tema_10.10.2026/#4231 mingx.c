// Se citește numărul natural nenul n și o cifră x. Să se determine cifra minimă, strict mai mare decât x.

#include <stdio.h>

int main() {
    long long int n, x, c = 10;
    
    printf("Introdu numarul n și valoarea x: ");
    
    if (scanf("%lld %lld", &n, &x) == 2) {
        while (n) {
            if (n % 10 > x && n % 10 < c) {
                c = n % 10;
            }
            n = n / 10;
        }
        if (c == 10) {
            c = -1;
        }

        printf("Rezultatul este: %lld\n", c);
    } else {
        printf("Erore la citirea datelor!\n");
    }

    return 0;
}
