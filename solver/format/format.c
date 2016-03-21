/**
 * @file format.c
 * @date Mar 2, 2016
 * @brief Formatted output
 */

#include <stdio.h>
#include <stdlib.h>
#include "../quad_constants.h"

#define BUFF_SIZE 128

/**
 * @brief Formatted print of real roots, if any
 *
 * @param num_roots Number of real roots
 * @param root The values of the real roots
 *
 * @return The formatted string, or NULL on error.
 */
char *format(int num_roots, Root root)
{
	#ifdef DEBUG
		FILE * logFile;
		logFile = fopen("log.txt","a");
		fprintf(logFile, "\nPassed parameters to format():\n");
		fprintf(logFile, "\tnum_roots = %d Root.x1: %lf Root.x2: %lf\n",
			num_roots,root.x1, root.x2);
		fclose(logFile);
	#endif

	/* Validate input */
	if (num_roots < 0 || num_roots > 2)
		return NULL;

	char *buf = malloc(BUFF_SIZE * sizeof(char));
	if (num_roots == 1) {
		sprintf(buf,
			"This is a single / double root;\nThe root is: %lf",
			root.x1);
	} else if (num_roots == 2) {
		sprintf(buf,
			"There are 2 real roots;\nThe first root is: %lf\nThe second root is: %lf",
			root.x1, root.x2);
	} else {
		sprintf(buf, "There are no real roots");
	}

	#ifdef DEBUG
		logFile = fopen("log.txt","a");
		fprintf(logFile, "Return value from format():\n");
		fprintf(logFile, "\tbuf: %s\n", buf);
		fclose(logFile);
	#endif

	return buf;
}
