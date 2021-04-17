int countDuplicates(int a[], int l)
{
    int count=0;
    for(int i=0; i<l; ++i)
    {
        for(int j=0; j<i; ++j)
        {
            if(a[i]==a[j])
            {
                ++count;
                break;
            }
        }
    }
    return count;
}





