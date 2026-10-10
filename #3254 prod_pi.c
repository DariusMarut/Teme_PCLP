// Se dă un număr natural n cu cel puțin două cifre, care conține atât cifre pare cât și cifre impare.
// Calculați produsul dintre cea mai mare cifră pară și cea mai mică cifră impară a lui n.

#include <stdio.h>

int main() {
    int n, n1, max_p = 0, min_i = 10, p;
    
    printf("Introdu un numar natural: ");
    
    if (scanf("%d", &n) == 1) {
        n1 = n;

        while (n1) {
            if (n1 % 2 == 0 && n1 % 10 > max_p) {
                max_p = n1 % 10;
            }

            n1 = n1 / 10;
        }
        n1 = n;
        while (n1) {
            if (n1 % 2 == 1 && n1 % 10 < min_i) {
                min_i = n1 % 10;
            }

            n1 = n1 / 10;
        }
        p = max_p * min_i;

        printf("Rezultatul este: %d\n", p);
    } else {
        printf("Erore la citirea numarului!\n");
    }

    return 0;
}
