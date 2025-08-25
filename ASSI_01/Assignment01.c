/*
Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);

*/

#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptr)
{
    ptr->day = 0;
    ptr->month = 0;
    ptr->year = 0000;
}
void printDateOnConsole(struct Date *ptr)
{
    printf("Date : %d/%d/%d\n", ptr->day, ptr->month, ptr->year);
}

void acceptDateFromConsole(struct Date *ptr)
{
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &ptr->day, &ptr->month, &ptr->year);
}

int main()
{
    struct Date d1;

    // Menu driven program
    int ch;
    do
    {
        printf("\nMenu:\n");
        printf("1. Initialize date\n");
        printf("2. Print date\n");
        printf("3. Accept date\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            initDate(&d1);
            break;
        case 2:
            printDateOnConsole(&d1);
            break;
        case 3:
            acceptDateFromConsole(&d1);
            break;
        case 0:
            printf("Exiting...\n");
            break;
        }
    } while (ch != 0);

    return 0;
}
