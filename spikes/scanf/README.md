scanf
=====

This is some testing of the scanf function offered by the stdio library

Testing
=======

# Single precision

32bits of space: 1 bit for sign, 8 bits for exp, 23 bits for frac

# Double precision

64 bits of space: 1 bit for sign, 11 bits for exp, 52 bits for frac

scanf.c

Sending in a very large number in the positives or negatives didn't cause any errors when testing scanf().
NANs and INF/-INFs are valid.
