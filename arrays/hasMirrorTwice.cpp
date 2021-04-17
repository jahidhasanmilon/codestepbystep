bool hasMirrorTwice(int array1[], int a1, int array2[], int a2)
{
    bool status=false;
    int count=0,i=0,k=a2-1;
    for (i = 0; i < a1; i++)
    {
        if (array1[i]==array2[k])
        {
            count++;
            k--;
        }
        if (k==-1)
        {
            k=a2-1;
            if (array1[i+1]==array2[a2-2])
            {
                k=a2-2;
                status=true;
            }
        }
        if (count==a2*2 || (count==(a2*2)-1 && status==true))
        {
            return true;
        }

    }
    return false;
}





