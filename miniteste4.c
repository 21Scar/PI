#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *sequencia = "hZC4TVEldBT1h7AivxjyJ2cGyKHmBQlR0VeY9vnGvfNsW28aewgMCXBAQIcZfV5HaFR4oVwrtMncCncFIuIoLcO7fmbITM7pCRqvnfGeZNjd1cAd3MBkEcgrr2J05mjSuZMZ5r16bOwT9XUp0mxnJTHxHUv0lPlmisL2asgw4DkDLxZPuCjGX38DvBVWWNpYswGii3WqkOeVKhasnpHJPUxgNe3Ow5C7CLR7B9aozcexne1dNefxSLjag4Qcrf42iE5MFQK3Mh15wtCaZubvCUVIUMaDfH6i6MPQVya8LUI7J4dKn0wwLdYTp68yLu7jkpzpbeTGNrcSt2uHqnK8nZC6r9ggqvGmobM7cS7WbmXc3HxbW9KCq68HyZ2ZlFfTDD7BpE9mApjAmwgmnjsu1DIbzuTtOj5FsUsVbXr7jhEP6STtgb9DCZMpjgzBW33zoetf8k4HcINjtnKc2PR2fAqJmsVzIFna9pKHRIWOKG65sMBp1COXoxrEI3Wr0Aqz2lD1vGeX5xYNMM1X7qPx57NHPiZhVrdQnROfhdZst6oepyLYdO2pqvVgWkrS3eaMhMxO4JK4oNUC3VO7VZrXyALC0O1rwSXoTA6BDmCXsLp1IeLwLu6xXaWLYPc4frcmzAIm36LLek1kvvKzCZVIfmHeMkjMPZcArNeofOjHi49B7BJOLnqD2OXzEwJAECpAHPawFWW85GdABp59bWudtF2lYUPYR4CFVNI7fj4GyTewOwghIcEvA0gYDruy1LFPXaSbe1bcmzWGHJldQqUzlp6RkrZvIIXXEn1I0iel35OTIFxcolke6vabOHy4l8Iv3VJmoN94xBCCPNvysO4rfDPhNuDKQBo39yZc7g3NevVPbIxLzADWLmsXw87fk1StXUOZ7Ht465UrjnwHphJZbRm8q21yMLPOAo1iKl5Pj5wtbbCOSYsf4SeipjrFGzL5nEFIqTIunUFJ6ZpxvpI5lh8tvl55bXcZ55dmmw0rdfP3Fe0uBB7K47pBROEVLsMq";

    int contador = 0;
    int frequency = 0;
    
    for (contador = 0; contador < strlen(sequencia); contador++){
        if (sequencia[contador] == 'b' || sequencia[contador] == 'k' || sequencia[contador] == 'z'){
            frequency++;
        }
    }
  printf("%d\n", frequency);
    return 0;
    }



