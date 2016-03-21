/*
* test2.c
* Unit tests for quad_roots()
* qsolve() solves a * x^2 + b x + c = 0
*   for the roots
* x1 and x2
*
* This uses the mock qsolve_sqrt() func in mock_sqrt.c,
* which does not call sqart()
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../cunit/cunit.h"
#include "../sqrt/mock_sqrt.h"
#include "../quad_constants.h"
#include "../num_roots/num_roots.h"
#include "calc_roots.h"

int main()
{
	Coef coefs;
	Root roots;
	int num, ret;
	double a, b, c;
	double x1, x2;
	int count;
	double x;
	char str[100];
	double d;
	double sqrtd;

	cunit_init();

	// qsolve_roots() passes this one
	// This allows about one base 10 least significant digit of error
	// (x - x1)*(x - x2) = 0
	x1 = 3.1;
	x2 = 3.3;
	a = coefs.a = 1.0;
	b = coefs.b = -x1 + -x2;
	c = coefs.c = x1 * x2;

	d = b * b - 4.0 * a * c;
	sqrtd = sqrt(d);

	setup_mock_sqrt(d, sqrtd, cunit_dmacheps * 2.0 * d);
	num = num_roots(coefs);
	ret = calc_roots(coefs, num, &roots);
	assert_eq("ret", ret, true);
	assert_feqrerr("x1", roots.x1, x2, 2.0 * cunit_dmacheps * 3.3);
	assert_feqrerr("x2", roots.x2, x1, 2.0 * cunit_dmacheps * 3.1);
	ret = check_mock_sqrt(&count, &x);
	snprintf(str, 99, "count ret = %d x =%20.61e", count, x);
	assert_eq(str, ret, 0);

	exit(0);
}
