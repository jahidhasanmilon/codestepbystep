void fibonacci (int fibo)
{
    int a=0, b=1, fib;
    cout << "Fibonacci sequence up to " << fibo << ":" << endl;
    while (a < fibo)
    {
        if (a < fibo)
        {
            cout << a << endl;
        }
        fib=a+b;
        a=b;
        b=fib;
    }
    return;
}



