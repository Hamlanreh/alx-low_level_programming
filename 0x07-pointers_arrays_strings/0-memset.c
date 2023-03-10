#include <stdio.h>


char *_memset(char *s, char b, unsigned int n) 
{
        for (int i = 0; i < 98; i++)
        {                       
                if(i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }

                if (i < n)
                {
                        s[i] = b;
                        printf("0x%02x", s[i]);
                } else 
                {
                        printf("0x%02x", s[i]);
                }
        }


        printf("\n");




        return s;
}

