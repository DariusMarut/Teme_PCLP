// Pentru un număr dat x, considerăm următoarele noțiuni:
//  -oglinditul lui x reprezintă numărul scris cu cifrele lui x în ordine inversă;
//  -urma lui x reprezintă diferența dintre numărul format cu atâtea cifre de 9 câte cifre are x și numărul x;
//  -numărul x este curat dacă oglinditul său este egal cu urma sa. De exemplu, 27 este un număr curat.
// Se dau cel mult 1000 numere naturale mai mici decât 100.000.000. Să se stabilească despre fiecare număr dacă este sau nu curat.

#include <stdio.h>

int main() {
    FILE *input = fopen("nrcurat.in", "r");
    FILE *output = fopen("nrcurat.out", "w");
    
    if (input == NULL || output == NULL) {
        if (input) fclose(input);
        if (output) fclose(output);
        return 1;
    }

    int n, o = 0, u = 0, nn, k = 0;
    
    printf("Se procesează fisierul nrcurat.in...\n");
    
    while (fscanf(input, "%d", &n) == 1) {
        nn = n;
        o = 0;
        u = 0;
        k = 0;
        while (nn) {
            o = o * 10 + nn % 10;
            k = k * 10 + 9;

            nn /= 10;
        }
        u = k - n;
        if (o == u) {
            fprintf(output, "1 ");
        } else {
            fprintf(output, "0 ");
        }

        printf("Valori procesate - o: %d, u: %d\n", o, u);
    }

    fclose(input);
    fclose(output);
    
    printf("Procesarea s-a incheiat cu succes. Rezultatele au fost scrise in nrcurat.out.\n");

    return 0;
}
