void removePalindromes(string a[], int x)
{
    for (int k=0; k<x; ++k)
    {
        bool check = true;
        string findword = a[k];
        int countword = findword.size();
        for (int j=0; j<countword; ++j)
        {
            check=false;
            if (findword[j]==findword[countword-1-j])
            {
                check = true;
            }
            else if (findword[j]==findword[countword-1-j]+32)
            {
                check = true;
            }
            else if (findword[j]==findword[countword-1-j]-32)
            {
                check = true;
            }
            if(check==false)
            {
                break;
            }
        }
        if (check == true)
        {
            a[k] = "";
        }
    }
}
