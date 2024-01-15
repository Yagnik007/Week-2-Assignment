#include <stdio.h>

void printCalendar(int year, int month)
{
    int daysInMonth, startDay, dayOfWeek;

    int monthDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        monthDays[2] = 29;
    }

    startDay = 1;
    dayOfWeek = startDay;

    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    for (int i = 0; i < startDay; i++)
    {
        printf("    ");
    }

    for (int day = 1; day <= monthDays[month]; day++)
    {
        printf("%3d ", day);

        if (++dayOfWeek > 6)
        {
            dayOfWeek = 0;
            printf("\n");
        }
    }
}

int main()
{
    int year, month;

    printf("Enter year and month (YYYY MM): ");
    scanf("%d %d", &year, &month);

    printf("\n\n");
    printf("     Calendar - %d/%d\n", month, year);
    printf("--------------------------\n");

    printCalendar(year, month);

    return 0;
}
