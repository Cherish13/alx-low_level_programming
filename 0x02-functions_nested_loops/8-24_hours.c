Task 8.txt
Who has access
A
System properties
Type
Text
Size
662 bytes
Storage used
662 bytes
Location
0x02. C - Functions, nested loops
Owner
Antony Bahati
Modified
Sep 13, 2022 by Antony Bahati
Opened
8:30 PM by me
Created
Sep 13, 2022
No description
Viewers can download
#include "main.h"
/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	mins_remainder = minutes % 10;
	hours_remainder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(mins_remainder + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
}
}
