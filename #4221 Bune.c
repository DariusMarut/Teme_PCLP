// Două numere sunt “bune” dacă cifra maximă a unui număr coincide cu cifra minimă din celălalt sau invers. Se dau două numere a și b numere naturale.
// Verificați dacă cele două numere sunt “bune” și afișați cifra comună. Dacă cele două numere nu sunt bune, afișați NU.

#include <stdio.h>

int min_val(int x) {
    int x_min = 9;

    while (x) {
        if (x % 10 < x_min) {
            x_min = x % 10;
        }

        x = x / 10;
    }

    return x_min;
}

int max_val(int x) {
    int x_max = 0;

    while (x) {
        if (x % 10 > x_max) {
            x_max = x % 10;
        }

        x = x / 10;
    }

    return x_max;
}

int main() {
    int a, b, a_min, b_min, a_max, b_max;
    
    printf("Introdu numerele a și b: ");
    
    if (scanf("%d %d", &a, &b) == 2) {
        a_min = min_val(a);
        b_min = min_val(b);
        a_max = max_val(a);
        b_max = max_val(b);

        if (a_min == b_max) {
            printf("Rezultatul este: %d\n", a_min);
        } else if (a_max == b_min) {
            printf("Rezultatul este: %d\n", a_max);
        } else {
            printf("Rezultatul este: NU\n");
        }
    } else {
        printf("Erore la citirea datelor!\n");
    }

    return 0;
}
