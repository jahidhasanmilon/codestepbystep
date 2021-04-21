void numberSquare(int min, int max)
{
    for (int i = min; i <= max; ++i)
    {
        int counter=i;
        for (int j = min; j <= max; ++j)
        {
            if (counter>max)
            {
                counter=min;
            }
            cout<<counter;
            counter++;
        }
        cout<<endl;
    }
}
