void floydsTriangle(int rows)
{
    int counter = 1;
    
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << counter << " ";
            ++counter;
        }

        cout << endl;
    }
}
