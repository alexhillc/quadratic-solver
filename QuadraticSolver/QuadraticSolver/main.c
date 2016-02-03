//
//  main.c
//  QuadraticSolver
//
//  Created by Alex Hill on 1/27/16.
//  Copyright © 2016 Alex Hill. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>

int main(int argc, const char * argv[]) {
//    int a = atoi(argv[1]);
//    int b = atoi(argv[2]);
//    int c = atoi(argv[3]);
//    
//    printf("%d, %d, %d\n", a, b, c);
//    
//    float rootArg = (b * b - (4 * a * c));
//    float sqRoot = rootArg > 0.0 ? sqrt(rootArg):-sqrt(-rootArg);
//    
//    if (sqRoot < 0.0) {
//        printf("things might be wrong");
//        return 1;
//    }
//    
//    float posX = (-b + sqRoot) / (2 * a);
//    float negX = (-b - sqRoot) / (2 * a);
//    
//    if (posX == NAN || negX == NAN) {
//        printf("suck a dick");
//    }
//    
//    printf("%f, %f\n", posX, negX);

    double complex z1 = 1.0 + 3.0 * I;
    double complex z2 = 1.0 - 4.0 * I;
    
    printf("Working with complex numbers:\n\v");
    
    printf("Starting values: Z1 = %.2f + %.2fi\tZ2 = %.2f %+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));
    
    double complex sum = z1 + z2;
    printf("The sum: Z1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));
    
    double complex difference = z1 - z2;
    printf("The difference: Z1 - Z2 = %.2f %+.2fi\n", creal(difference), cimag(difference));
    
    double complex product = z1 * z2;
    printf("The product: Z1 x Z2 = %.2f %+.2fi\n", creal(product), cimag(product));
    
    double complex quotient = z1 / z2;
    printf("The quotient: Z1 / Z2 = %.2f %+.2fi\n", creal(quotient), cimag(quotient));
    
    double complex conjugate = conj(z1);
    printf("The conjugate of Z1 = %.2f %+.2fi\n", creal(conjugate), cimag(conjugate));
    
    return 0;
}
