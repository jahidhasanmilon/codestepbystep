int quadrant(double x, double y)
{
    int quad=0;
    if ((x==0 && y>0) || (x==0 && y<0))
    {
        return quad;
    }
    else if ((x>0 && y==0) || (x<0 && y==0))
    {
        return quad;
    }
    else if (x>0 && y>0)
    {
        return quad=1;
    }
    else if (x<0 && y>0)
    {
        return quad=2;
    }
    else if (x<0 && y<0)
    {
        return quad=3;
    }
    else if (x>0 && y<0)
    {
        return quad=4;
    }
    else
        return quad;
}
