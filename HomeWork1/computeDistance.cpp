double computeDistance (int x1, int y1, int x2, int y2)
{
    long double d = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2));
    return d;
}
