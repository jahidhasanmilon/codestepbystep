void collapsePairs(int ar[], int l)
{
    for(int i=0; i<l-1; i=i+2)
    {
        if((ar[i]+ar[i+1])%2==0)
        {
            ar[i]=ar[i]+ar[i+1];
            ar[i+1]=0;
        }
        else
        {
            ar[i+1]=ar[i]+ar[i+1];
            ar[i]=0;
        }
    }
}








