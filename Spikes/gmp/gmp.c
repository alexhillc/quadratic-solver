//
//  gmp.c
//  gmp
//
//  Created by Alex Hill on 2/3/16.
//  Copyright © 2016 Alex Hill. All rights reserved.
//

#include <stdio.h>
#include <gmp.h>

int main(int argc, const char * argv[]) {
  mpz_t a, b;
  mpz_init_set_str(a, argv[1], 10);
  mpz_init_set_str(b, argv[2], 10);

  /* Add a and b from passed args */
  mpz_add (a, a, b);

  printf("%s + %s = %s\n", argv[1], argv[2], mpz_get_str(NULL, 10, a));

  return 0;
}
