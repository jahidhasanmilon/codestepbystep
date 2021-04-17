int countUnique (int a1[], int x)
{
    int counting = 0;
    for (int a = 0; a < x; ++a)
    {
        counting++;
        for (int b = 0; b < a; ++b)
        {
            if (a1[a] == a1[b])
            {
                counting--;
                break;
            }
        }
    }
    return counting;
}








