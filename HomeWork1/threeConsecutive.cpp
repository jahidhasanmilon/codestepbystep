int threeConsecutive(int a, int b, int c)
{
    if ( a == b || b == c || a == c)
    {
        return false;
    }
    else if (((a == b + 1 || a == b - 1) || (a == c + 1 || a == c - 1)) && ((b == c + 1 || b == c - 1))
             || ((b == c + 1 || b == c - 1) || (a == b + 1 || a == b - 1)) && (a == c + 1 || a == c - 1))
    {
        return true;
    }
    return false;
}
