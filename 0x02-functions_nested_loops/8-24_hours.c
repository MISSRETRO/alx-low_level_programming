#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int i, t;

	i = 0;

	while (i < 24)
	{
		t = 0;

		while (t < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar('\n');
			t++;
		}
		i++;
	}
}