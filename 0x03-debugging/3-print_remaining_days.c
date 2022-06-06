#include "main.h"

/**
 * convert_day - converts day of month to day of year, without accounting
 *               for leep year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */

int convert_day(int month, int day)
{
switch (month)
{
case 2:
day += 31;
break;
case 3:
day += 59;
break;
case 4:
day += 90;
break;
case 5:
day += 120;
break;
case 6:
day += 151;
break;
case 7:
day += 181;
break;
case 8:
day += 212;
break;
case 9:
day += 243;
break;
case 10:
day += 273;
break;
case 11:
day += 304;
break;
case 12:
day += 334;
break;
default:
break;
}
return (day);
}

/**
 * print_remaining_days - Print how many days are left in a year
 * @month: month in number format
 * @day: days of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
{
if (month >= 2 && day >= 60)
{
day++;
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", (365 - day));
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else
{
printf("Day of the year:  %d\n", day);
printf("Remaining days: %d\n", (366 - day));
}
}
}
