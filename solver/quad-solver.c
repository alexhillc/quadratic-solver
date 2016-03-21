/**
 * @file quadmain.c
 * @date Feb 29, 2016
 * @brief Coordinates all modules.
 */

#include <stdlib.h>
#include <stdio.h>
#include "quad_constants.h"
#include "input/input.h"
#include "validation/input_val.h"
#include "num_roots/num_roots.h"
#include "calc_roots/calc_roots.h"
#include "output/output.h"
#include "format/format.h"

/**
 * @brief Entry point for program.
 *
 * Coordinates all modules.
 */
int main()
{
	#ifdef DEBUG
		FILE * logFile;
		logFile = fopen("log.txt","w+");
		fprintf(logFile, "----LOGFILE FOR QUADRATIC EQUATION SOLVER----\n");
		fclose(logFile);
	#endif
	int rootNum = 0;
	Coef coef;
	Root root;
	char *buf;
	char *input;
	input = get_input();
	if (!input_val(&coef, input)) {
		output("Invalid input");
		exit(1);
	}
	#ifdef DEBUG
		logFile = fopen("log.txt","a");
		fprintf(logFile, "\nReturn parameters to input_val():\n");
		fprintf(logFile, "\tCoef.a: %lf Coef.b:%lf Coef.c: %lf \n"
			,coef.a,coef.b,coef.c);
		fclose(logFile);
	#endif
	rootNum = num_roots(coef);
	calc_roots(coef, rootNum, &root);
	buf = format(rootNum, root);
	output(buf);
	free(input);
	free(buf);
}
