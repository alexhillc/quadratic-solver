//
//  QuadSolver.c
//  QuadraticSolver
//
//  Created by Alex Hill on 1/27/16.
//  Copyright © 2016 Alex Hill. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    printf("%d, %d, %d\n", a, b, c);

    float rootArg = (b * b - (4 * a * c));
    if (rootArg > 0.0) {
        //then this has two real roots
        float posRoot = (-b + sqrt(rootArg)) / (2 * a);
        float negRoot = (-b - sqrt(rootArg)) / (2 * a);
        printf("The positive root is: %f and negative root is: %f \n", posRoot, negRoot);
    } else if (rootArg == 0.0) {
        //there is a singular root
        float root = -b / (2 * a);
        printf("The root is: %f\n",root);
    } else {
        //there is no real root
        float real = -b / (2 * a);
        float img = sqrt(-rootArg);
        printf("The positive imaginary root is: %f+%fi and the negative imaginary root is: %f-%fi \n", real, img, real, img);
    }
}
