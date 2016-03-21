/**
 * @file prompt.c
 * @date Mar 2, 2016
 * @brief Prompt user input
 */

#include <stdio.h>
#include <stdlib.h>
#include "../quad_constants.h"

/**
 * @brief Print a prompt and retrieve user input
 *
 * @return The user input
 */
char *get_input()
{
	char *input = malloc(sizeof(char) * 50);
	printf("Enter values: ");
	fgets(input, sizeof(char) * 50, stdin);
	#ifdef DEBUG
		FILE * logFile;
		logFile = fopen("log.txt","a");
		fprintf(logFile, "\nReturn Value from prompt(): %s",input);
		fclose(logFile);
	#endif
	return input;
}
