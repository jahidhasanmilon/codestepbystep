int sqrt(int N)
{
    for (int x=0; x<=N; ++x)
    {
        if (x*x==N)
        {
            return x;
        }
        else if (x*x>N)
        {
            return x-1;
        }
    }
    return 0;
}
