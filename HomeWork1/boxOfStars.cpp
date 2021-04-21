void boxOfStars (int col, int row)
{
    for (int i=1; i<=row; ++i)
    {
        for (int j=1; j<=col; ++j)
        {
            if (i==1 || i==row)
            {
                cout << "*";
            }
            else if (i>1 && i<row)
            {
                if (j==1)
                {
                    cout << "*";
                }
                else if (j>1 && j<col)
                {
                    cout << " ";
                }
                else if (j==col)
                    cout << "*";
            }
        }
        cout << endl;
    }
    return;
}
