//
//  Solver.c
//  QuadraticSolver
//
//  Created by Hogan Charters on 2/3/16.
//  Copyright © 2016 Alex Hill. All rights reserved.
//

#include "Solver.h"
#include <stdlib.h>
#include <math.h>

int *  quadSolver(int a, int b, int c){
    int * solution;
    int x = b * b - 4 * a * c;
    int posroot;
    int negroot;
    if (x > 0 ) {//there are two real roots
        posroot = (-b + sqrt(x))/(2 * a);
        negroot = (-b - sqrt(x))/(2 * a);
    }else if (x == 0){//there is one real root
        posroot = -b/(2 * a);
    }else{
        //there is no real roots
        posroot = 
    }
    return solution;
}