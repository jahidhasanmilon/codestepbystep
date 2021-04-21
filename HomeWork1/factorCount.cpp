int factorCount (int inte)
{
    int totalcount = 0;
    for (int i = 1; i <= inte; ++i)
    {
        if (inte%i==0)
        {
            totalcount++;
        }
    }
    return totalcount;
}
