int findMedian(int a[], int l)
{
    for(int i=0; i<l; ++i)
    {
        for(int j=i; j<l; ++j)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a[l/2];
}








