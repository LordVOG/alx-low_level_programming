#include "main.h"

/**
  * flip_bits - flip bit
  * @n: starting flip
  * @m: target flip
  *
  * Return: flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor)
	{
		bits += xor & 1;
		xor >>= 1;
	}
	return (bits);
}
