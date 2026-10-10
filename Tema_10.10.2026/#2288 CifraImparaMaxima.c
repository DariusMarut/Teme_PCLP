// Să se scrie un program care să determine cea mai mare cifră impară a unui număr natural citit de la tastatură.

#include <stdio.h>

int main() {
    int n, c = 0;
    
    printf("Introdu un numar natural: ");
    
    if (scanf("%d", &n) == 1) {
        while (n) {
            if (n % 2 == 1 && n % 10 > c) {
                c = n % 10;
            }

            n /= 10;
        }

        if (c == 0) {
            printf("nu exista\n");
        } else {
            printf("Rezultatul este: %d\n", c);
        }
    } else {
        printf("Erore la citirea numarului!\n");
    }

    return 0;
}
