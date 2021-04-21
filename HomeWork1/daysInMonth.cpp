int daysInMonth (int month)
{
    int x;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
    {
        x = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        x = 30;
    }
    else if ( month == 2)
    {
        x = 28;
    }
    return x;
}
