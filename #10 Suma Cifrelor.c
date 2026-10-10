// Să se scrie un program care să determine suma cifrelor unui număr natural citit de la tastatură.

#include <stdio.h>

int main() {
    int n, s = 0;
    
    printf("Introdu un numar natural: ");
    
    if (scanf("%d", &n) == 1) {
        while (n) {
            s = s + n % 10;
            n = n / 10;
        }
        printf("Suma cifrelor este: %d\n", s);
    } else {
        printf("Erore la citirea numarului!\n");
    }

    return 0;
}
