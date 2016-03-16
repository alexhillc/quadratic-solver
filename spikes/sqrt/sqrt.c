//
//  sqrt.c
//  sqrt
//
//  Created by Alex Hill on 2/5/16.
//  Copyright © 2016 Alex Hill. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float posInf = INFINITY;
    float negInf = -INFINITY;
    float nanFloat = NAN;

    printf("posInf = %f\n", posInf);
	printf("sqrt(posInf) = %f\n", sqrt(posInf));

	printf("negInf = %f\n", negInf);
	printf("sqrt(negInf) = %f\n", sqrt(negInf));

	printf("nanFloat = %f\n", nanFloat);
	printf("sqrt(nanFloat) = %f\n", sqrt(nanFloat));

    return(0);
}
