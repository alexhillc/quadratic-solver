/**
 * @file quad_constants.h
 * @date Mar 2, 2016
 * @brief Constants for this project.
 */

/**
 * @brief Coefficients struct for a quadratic equation.
 */
typedef struct {
	double a;
	double b;
	double c;
} Coef;

/**
 * @brief The root struct.
 */
typedef struct {
	double x1;
	double x2;
} Root;

#define DEBUG

