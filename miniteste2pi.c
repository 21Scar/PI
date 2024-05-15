#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *sequencia = "goeyZwoFgsXSCqZQ63g5YzwcDUhBruIWderDdonkDaUK5ZyX9dH86AOJlTZLcmSHdg0mD3pBDahCBFCm4Fh0n5fSlaGqJNRSPuBGQzEcUqL6DyZpzBj1t8ygCmzFQGTxfXh4D3cCPoqMuGL8geZiNMPYp9AibtdcFAMCMxE4jpx8eYptgKuF0WFaKXpocbcg69ggTKs6S35TLBHrNblGfSgtkrDUZUtXk0VMWxopXKKS022zxUy0zkIVGnYjJuBhkH9JLsbSm9xMayyIZ2RIFqQoKVAwvkBzIaUkrg5wxA3LM8eFSeiDxUgATGCyqzbbbuyf63b66Tq5TegCz3aAVKK9NhJZmRq4Bj2L2ypYfFR9iAAQx0ZuF5bVarZcizgYdS46eh4wGlexQQkJY76N3XArvA7dgXE31nM1yqwsZXMR3kHkxmvYNzY9DC3d8sEx7xSke2UHA17mNs4RuzGCBwbSc9DowM7wwgQRlBqX4t6vEosWE17ADstFoB7b3GaNX6vpzus3s0t6ue4d6odT99RDLbOoGgTHvTPA9BpX3iaSMvVKlI21bqrPezuCMJdtNg0XGF7NVavVa6ynZcKPWaQrvGcPBEL48MWacOpsmXAEP5Kfz4BTE9H9x9dg9wCWJZ1Qm1YJJ7H1Rzc5zAHoGJGyLpWofczu6F5rbZSiTOKgv0Bu6B5d9HSJrgxQqEUmXtMqsUDl93mvg2MR1v3XYVQSnjIiGKMwrJKNI6cBoSRArT4Ei6GWjsjynXYJnDtY4qcPpSD7BDkGHOuiuxcdr4yz3DDp6QRF9wkAU9nURes7stmM8PUV9GBPoKvaxaOPDqoOJFwg3BFqFK3aUh6Jke7VanM5Bq71jaKF8Fy8dKHvpXHq8AguKYUuGCCK2U7BQuWYjVVT2PNsGZ0STPjlZaVgHfaAtRgI3IMPdZ0yHGUwAb56V02nizrSR8SBq0d3wpkdLjgfwFbCgSAeeAAFgYubnCusPSmDu8J8SdTYMvo4WHhMNLPG4g6N1neorxID";

    int i, len = strlen(sequencia);
    char smallestSubstring[4];
    strncpy(smallestSubstring, sequencia, 3);
    smallestSubstring[3] = '\0';

    for (i = 1; i <= len - 3; i++) {
        char currentSubstring[5];
        strncpy(currentSubstring, sequencia + i, 4);
        currentSubstring[3] = '\0';

        if (strcmp(currentSubstring, smallestSubstring) < 0) {
            strncpy(smallestSubstring, currentSubstring, 3);
            smallestSubstring[3] = '\0';
        }
    }

    printf("Smallest lexicographic substring: %s\n", smallestSubstring);

    return 0;
   
    
}