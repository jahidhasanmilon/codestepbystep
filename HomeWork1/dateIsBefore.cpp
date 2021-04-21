bool dateIsBefore (int month1, int date1, int month2, int date2)
{
    bool det = false;
    if (month1 < month2)
    {
        det = true;
    }
    else if (month1 == month2 && date1 < date2)
    {
        det = true;
    }
    return det;
}
