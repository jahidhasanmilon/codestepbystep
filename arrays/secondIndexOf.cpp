int secondIndexOf(int a[], int l, int target)
{
    int count=0;
    for(int i=0; i<l; ++i)
    {
        if(a[i]==target)
            count++;
        if(count==2)
            return i;
    }
    return -1;
}








