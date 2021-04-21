bool isVowel(string s)
{
    if (s.length() == 1)
    {
        char c = tolower(s[0]);

        bool flag = false;

        switch(c)
        {
        case 97:
            flag = true;
            break;
        case 101:
            flag = true;
            break;
        case 105:
            flag = true;
            break;
        case 111:
            flag = true;
            break;
        case 117:
            flag = true;
            break;
        }

        return flag;
    }
    return false;
}






