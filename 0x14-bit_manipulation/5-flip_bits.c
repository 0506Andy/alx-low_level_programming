#include "main.h"

/**
 * flip_bits - returns the number of bits you getfrom one number
 * @n:number to start from to get bits
 * @m:number to end to get the bits between
 * Return:number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int count;

	num = n ^ m;

	while (num > 0)
	{
		if (num & 1) 
		{
			count++;
		}
		num >>= 1;
	}
	return (count);
}
