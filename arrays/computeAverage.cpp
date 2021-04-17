float computeAverage (int a[], int x)
{
    float sum = 0;
    for (int j=0; j<x; ++j)
    {
        sum = sum + a[j];
    }
    sum = sum/x;
    return sum;
}





