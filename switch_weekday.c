// Program to input week number and display day name

#include <stdio.h>

int main()
{

    int num;

    printf("Enter a single number (from 1 to 7): ");
    scanf("%d", &num);

    switch (num)
    {
        
    case 1:
        printf("Sunday");
        break;

    case 2:
        printf("Monday");
        break;

    case 3:
        printf("Tuesday");
        break;

    case 4:
        printf("Wednesday");
        break;

    case 5:
        printf("Thursday");
        break;

    case 6:
        printf("Friday");
        break;

    case 7:
        printf("Saturday");
        break;

    default:
        printf("Invalid number.");
    }

    return 0;
}