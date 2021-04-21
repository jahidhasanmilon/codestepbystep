bool isAllVowels(string c)
{
    for(int i=0; i<c.size(); i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
            continue;
        else
        {
            return false;
        }
    }
    return true;
}


