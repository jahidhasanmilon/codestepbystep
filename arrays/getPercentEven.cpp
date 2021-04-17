float getPercentEven(int a1[], int x)
{
    float percent=0, counting=0;
    if(x>0)
    {
        for (int a = 0; a < x; ++a)
        {
            if (a1[a]%2==0)
            {
                counting++;
            }
        }
        percent = (counting/x)*100;
    }
    else if (x==0)
    {
        percent = 0;
    }
    return percent;
}





