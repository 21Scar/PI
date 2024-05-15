/*#include <stdio.h>

int fizz(int n) {
  return ((n + 4) % 43) == 0;
}

int buzz(int n) {
  return ((n - 5) % 47) == 0;
}

void fizzbuzz(int n) {
  if (fizz(n)) {
    printf("Fizz\n");
  } else if (buzz(n)) {
    printf("Buzz\n");
  }
}


void fizzbuzz_range(int from, int to) {
  for (int i = from; i < to; i++) {
    fizzbuzz(i);
  }
}

int main() {
  int start = 487;
  int end = 5487;

  fizzbuzz_range(start, end);

  return 0;
}



#include <stdio.h>

int fizz(int n) {
    return ((n + 4) % 43) == 0;
}

int buzz(int n) {
    return ((n - 5) % 47) == 0;
}

void fizzbuzz(int n) {
    if (fizz(n) && buzz(n))
        printf("FizzBuzz\n");
    else if (fizz(n))
        printf("Fizz\n");
    else if (buzz(n))
        printf("Buzz\n");
    else
        printf("%d\n", n);
}

void fizzbuzz_range(int from, int to) {
    int count_buzz = 0;
    int count_between = 0;
    int found_fizzbuzz = 0;

    for (int i = from; i < to; i++) {
        if (fizz(i) && buzz(i)) {
            if (!found_fizzbuzz) {
                found_fizzbuzz = 1;
            } else {
                count_between++;
            }
            fizzbuzz(i); // Imprimir FizzBuzz
        } else if (fizz(i)) {
            if (found_fizzbuzz) {
                printf("Fizz\n");
            } else {
                fizzbuzz(i); // Imprimir Fizz
            }
        } else if (buzz(i)) {
            count_buzz++;
            fizzbuzz(i); // Imprimir Buzz
        } else {
            printf("%d\n", i); // Imprimir o número
        }
    }

    printf("Total de linhas do tipo Buzz: %d\n", count_buzz);
    printf("Quantidade de números entre a primeira linha FizzBuzz e a linha Fizz seguinte: %d\n", count_between);
}

int main() {
    fizzbuzz_range(487, 5487);
    return 0;
}
*/
#include <stdio.h>

int fizz(int n) {
  return ((n + 4) % 43) == 0;
}

int buzz(int n) {
  return ((n - 5) % 47) == 0;
}

void fizzbuzz(int n) {
  if (fizz(n) && buzz(n))
      printf("FizzBuzz\n");
  else if (fizz(n))
      printf("Fizz\n");
  else if (buzz(n))
      printf("Buzz\n");
  else
      printf("%d\n", n);
}

void fizzbuzz_range(int from, int to) {
  for (int i = from; i < to; ++i) {
    fizzbuzz(i);
  }
}

int main() {
  int count_between = 0;
  int first_fizz = 0;
  
  for (int i = 487; i < 5487; ++i) {
    if (fizz(i)) {
      first_fizz = i;
      break;
    }
  }

  for (int i = first_fizz + 1; i < 5487; ++i) {
    if (fizzbuzz(i) != 0) {
      count_between = i - first_fizz - 1;
      break;
    }
  }

  printf("Quantidade de números entre a primeira linha Fizz e a linha FizzBuzz subsequente: %d\n", count_between);

  return 0;
}
