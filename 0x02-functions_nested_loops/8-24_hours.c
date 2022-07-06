#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: no value to be returned
 */
void jack_bauer(void)
{
	int minutes = 0;
	int t = 0, h = 0, m = 0, s = 0;

	while (minutes < 1440)
	{
		_putchar(t + '0');
		_putchar(h + '0');
		_putchar(':');
		_putchar(m + '0');
		_putchar(s + '0');
		_putchar('\n');

		s++;
		if (s > 9)
		{
			s = 0;
			m++;
		}
		if (m > 5)
		{
			m = 0;
			h++;
		}
		if (h > 9)
		{
			h = 0;
			t++;
		}
		minutes++;
	}
}
