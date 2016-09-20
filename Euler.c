//
//  Euler.c
//  
//
//  Created by Sebastian Cain on 9/19/16.
//
//
#include <stdlib.h>
#include <stdio.h>
int main() {
    int f1 = 0;
    int i;
    for (i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            f1 += i;
        }
    }
    printf("Answer 1: %d\n", f1);
    
    int f2 = 0;
    int j1 = 1;
    int j2 = 1;
    
    while (j2 < 4000000) {
        int temp = j1 + j2;
        if (temp % 2 == 0) {
            f2 += temp;
        }
        j1 = j2;
        j2 = temp;
    }
    printf("Answer 2: %d\n", f2);
    
    return 0;
}
