// if-else
#include <stdio.h>
int main()
{
    int year;
    printf ("Enter the year: ");
    scanf ("%d",&year);
    if (year%400==0 || year%4==0 && year%100!=0)
        printf ("%d is Leap Year.",year);
    else
        printf ("%d is not Leap Year.",year);
    return 0;
}
// if-else ladder
#include <stdio.h>
int main()
{
    int year;
    printf ("Enter the year: ");
    scanf ("%d",&year);
    if (year%400==0)
        printf ("%d is Leap Year.",year);
    else if (year%100==0)
        printf ("%d is not Leap Year.",year);
    else if (year%4==0)
        printf ("%d is Leap Year.",year);
    else
        printf ("%d is not Leap Year.",year);
    return 0;
}
// nested if-else
#include <stdio.h>
int main()
{
    int year;
    printf ("Enter the year: ");
    scanf ("%d",&year);
    if (year%100==0)
    {
        if (year%400==0)
            printf ("%d is Leap Year.",year);
        else
            printf ("%d is not Leap Year.",year);
    }
    else
    {
        if (year%4==0)
            printf ("%d is Leap Year.",year);
        else
            printf ("%d is not Leap Year.",year);
    }
    return 0;
}
// switch
#include <stdio.h>
int main()
{
    int year;
    printf ("Enter the year: ");
    scanf ("%d",&year);
    switch (year%100)
    {
    case 0:
        switch (year%400)
        {
        case 0:
            printf ("%d is Leap Year.",year);
            break;
        default:
            printf ("%d is not Leap Year.",year);
        }
        break;
    default:
        switch (year%4)
        {
        case 0:
            printf ("%d is Leap Year.",year);
            break;
        default:
            printf ("%d is not Leap Year.",year);
        }
    }
    return 0;
}
// Ternary operator
#include <stdio.h>
int main()
{
    int year;
    printf ("Enter the year: ");
    scanf ("%d",&year);
    (year%400==0 || year%4==0 && year%100!=0)?(printf ("%d is Leap Year.",year)):(printf ("%d is not Leap Year.",year));
    return 0;
}
// Function
#include <stdio.h>
int leap (int y)
{
    if (y%400==0 || (y%4==0 && y%100!=0))
        return 1;
    else
        return 0;
}
int main()
{
    int year;
    printf ("Enter the year: ");
    scanf ("%d",&year);
    if (leap(year))
        printf ("%d is Leap Year.\n",year);
    else
        printf ("%d is not Leap Year.\n",year);
    return 0;
}
