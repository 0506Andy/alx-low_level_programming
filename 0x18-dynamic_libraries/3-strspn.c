#include "main.h"
#include <unistd.h>

/**
 * _strspn - Returns the number of bytes in the initial segment
 * @s: Number of bytes in the intial segment
 * @accept: Number of bytes in s
 * Return:count
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int count;
        int i, j, found;

        count = 0;

        for (i = 0; s[i] != '\0'; i++)
        {
                found = 0;
                for (j = 0; accept[j] != '\0'; j++)
                {
                        if (s[i] == accept[j])
                        {
                                found = 1;
                                break;
                        }
                }
                if (!found)
                {
                        return (count);
                }
                count++;
        }
        return (count);
}


