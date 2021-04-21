void showTwos(int num)
{
    if (num > 0)
    {
        cout << num << " = ";
        while (1)
        {
            if (num%2==0)
            {
                cout << "2 * ";
            }
            else if (num%2==1)
            {
                cout << num;
                break;
            }
            num = num/2;
        }
    }
    else if (num < 0)
    {
        num = - num;
        cout << -num << " = ";
        while (1)
        {
            if (num%2==0)
            {
                cout << "2 * ";
            }
            else if (num%2==1)
            {
                cout << -num;
                break;
            }
            num = num/2;
        }

    }
    return;
}







