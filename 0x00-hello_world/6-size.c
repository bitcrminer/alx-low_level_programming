#include <stdio.h>
  2 /**
  3  * main - this sdesribes the main function of the code
  4  * Return: 0
  5  */
  6 int main(void)
  7 {
  8         char a;
  9         int b;
 10         long int c;
 11         long long int d;
 12         float e;
 13 
 14         printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
 15         printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
 16         printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
 17         printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
 18         printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
 19         return (0);
 20 }
