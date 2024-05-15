#include <stdio.h>

int main() {
    char *sequencia = "NIoHl3a4mHgHKpQuZdtJqaQFuRWK9FCSzNWl4TXynEhVNAg1Q5iH4YThxU2mBz3rPyazdwl8r75VmfcDzyy8th1ifTbCckIdG2kxnwvYrBTE65mmVRKrkLPDpznkjCvOnGo4QgtFuFNaNqEzpABiQtFi1S4FGrwwtCqsD0XrXLgrL2ZiNEx6qzDjcjM6oihZRF7dEDuo5nJh9anJ34J4wMayFuPnKePo9PGSc7yoxedBnLxX97nQTmC32Wg7wmpE1aRcdGVdUOyJLRf48JZvLfs0pgmBk3JWizQn9xgg76Y10jASsu7PZ7W55LvHkR1MM5RRsvFZ42CBgOxMIi0QR67t8MHnUMpUg6xxMputHHztyaDNi58jYMsfwdpgZRpTAm3MVGVO9AyXo33f8lKjXWt98eIwpDq8pBNRDJZmw3vDSD3s2xlcQcgD2hlOUkz1P4me7ELAPlCuIPVKrELeTfvHSdSpHp4ZoQWzDC6vB9QcZRw2NT4o4xrNlOUCLfnLjv1y78PakXZLoLxsvRF2rYVNACjuKqmLbEKPEEpspRl0O8gBMucda0bKPIBPizi1SwP0aEo7uFFesA2nTC5lFhfwZ9WDuVC7rSNC0EL8zY94Q9wy80K0Rc6lqXnLXcn0ZFi8QtSpc4TP0KGB70RNrMkPr3koNph786F6mFOSkHXiSPu5h2KvmTu0miCFS2pypUBGsMmTeGiJ6SEDg78KLsQT0tGo74OipUrgXjYMClykICVNlGdbnJ38vtHvtnu5f7dwzWdH46Hl8LPSNu5BqCyKH0nP5pJsr8hvTZWcswd8IMpSznlO8ygyZkF1juffgc6TdXg24yqtTiFq8QbI158hlewBaLKmhzdwgh0iMUKD72tdNXBQ4nFotVoA4Di3IXvDoF5mv5BPUapDxIaqJLd6Gn941lOqKFynIst0hQxOvjgdSnYA88BVdZYDNY7diLIIWXHRY2HNG0hJXmxRT5eUrnSLV6RNDdIaWI5XhGqhZrWem9Xr9M2RDDjGIsj8";

    int count_e = 0;
    int count_i = 0;
    int count_r = 0;

    for (int i = 0; sequencia[i] != '\0'; i++) {
        if (sequencia[i] == 'e') {
            count_e++;
        } else if (sequencia[i] == 'i') {
            count_i++;
        } else if (sequencia[i] == 'r') {
            count_r++;
        }
    }

    int sum = count_e + count_i + count_r;

    printf("Sum of frequencies: %d\n", sum);

    return 0;
}
