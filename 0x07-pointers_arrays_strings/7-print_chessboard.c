#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard, 2d array
 * @a: 2d array of chars
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
  /*variables*/
	int n, j;
	n = 0;
	while (n < 8) /*repeat number*/
	  {
	    j = 0;
	    while (j < 8)
	      {
		_putchar ('\n'); /*print mew line*/
		n++;
	      }
	  }
