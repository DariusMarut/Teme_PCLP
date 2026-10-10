//Să se scrie un program care să determine produsul cifrelor impare ale unui număr natural citit de la tastatură.

#include <stdio.h>

int main() {
    int n, p = 1, c = -1;
    
    printf("Introdu un numar natural: ");
    
    if (scanf("%d", &n) == 1) {
        while (n) {
            if (n % 2 == 1) {
                p = p * (n % 10);
                c = 1;
            }
            n = n / 10;
        }
        
        if (c == -1) {
            p = -1;
        }
        
        printf("Rezultatul este: %d\n", p);
    } else {
        printf("Erore la citirea numarului!\n");
    }

    return 0;
}
