//
//  Euler.c
//  
//
//  Created by Sebastian Cain on 9/19/16.
//
//
#include <stdlib.h>
#include <stdio.h>

int fin = 0;
int i;
for (i = 0, i < 1000, i++) {
    if (i % 3 == 0 || i % 5 == 0) {
        fin += 1;
    }
}
printf("Answer: %d", fin);
