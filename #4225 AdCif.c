// Se dă un număr natural nenul n. Trebuie să determinați suma anumitor cifre din n.
// O cifră poate fi adunată la sumă numai dacă ea este strict mai mare decât toate celelalte din dreapta sa.

#include <stdio.h>

int main() {
    int n, S = 0, c = -1;
    
    printf("Introdu un numar natural: ");
    
    if (scanf("%d", &n) == 1) {
        while (n) {
            if (n % 10 > c) {
                S = S + n % 10;
                c = n % 10;
            }

            n = n / 10;
        }

        printf("Rezultatul este: %d\n", S);
    } else {
        printf("Erore la citirea numarului!\n");
    }

    return 0;
}
