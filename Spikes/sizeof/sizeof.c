//
//  sizeof.c
//  sizeof
//
//  Created by Alex Hill on 1/29/16.
//  Copyright © 2016 Alex Hill. All rights reserved.
//

#include <stdio.h>
#include <float.h>

int main(int argc, const char * argv[]) {
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(long double) = %zu\n", sizeof(long double));
    printf("sizeof(float) = %zu\n", sizeof(float));

    printf("DBL_DIG = %u\n", DBL_DIG);
    printf("LDBL_DIG = %u\n", LDBL_DIG);
    printf("FLT_DIG = %u\n", FLT_DIG);

    return 0;
}
