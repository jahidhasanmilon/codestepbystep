int evennum;
float num=0, sum=0, avg;
for (;;)
{
    cout << "Integer? ";
    cin >> evennum;
    if (evennum==0)
    {
        break;
    }
    if (evennum%2==0)
    {
        num = num + 1;
        sum = sum + evennum;
    }
}
avg = sum / num;
cout << "Average: " << avg << endl;
