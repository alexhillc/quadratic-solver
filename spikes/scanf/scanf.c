//
//  scanf.c
//  scanf
//
//  Created by Alex Hill on 1/29/16.
//  Copyright © 2016 Alex Hill. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
	float enteredVal;

	printf("Enter a value: ");
	scanf("%f",&enteredVal);
	printf("enteredVal: %f\n", enteredVal);

	return 0;
}
