int sumOfDigits (int inte)
{
    int sum = 0, rem;
    while (inte!=0)
    {
        rem = inte%10;
        sum = sum + rem;
        inte = inte / 10; 
    }
    if (sum<0)
    {
        sum = -sum; 
    }
    return sum;
}


