void banish(int a1[], int l1, int a2[], int l2)
{
    for (int i=0; i<l2; ++i)
    {
        for (int j=0; j<l1; ++j)
        {
            if (a1[j]==a2[i])
            {
                for (int k=j; k<l1-1; ++k)
                {
                    a1[k]=a1[k+1];
                }
                a1[l1-1]=0;
                j=0;
                i=0;
            }
        }
    }
}
