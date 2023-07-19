#include "main.h"
#include <unistd.h>

/**
 * times_table -Prints x9 table
 *
 * Return: Void
 */
void times_table(void)
{
	 int a, b, c, d, e;

	 for (a = 0; a <= 9; a++)
	 {
		 for (b = 0; b <= 9; y++)
		 {
			 c = a * b;

			 if (z > 9)
			 {
				 d = c % 10;

				 e = (c - d) / 10;
				 _putchar(44);
				 _putchar(32);
				 _putchar(e + '0');
				 _putchar(d + '0');
			 }
			 else
			 {
				 if (b != 0)
				 {
					 _putchar(44);
					 _putchar(32);
					 _putchar(32);
				 }
				 _putchar(c  + '0');
			 }
		 }
		 _putchar('\n');
	 }
}