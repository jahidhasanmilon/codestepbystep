int wordCount(string sentence)
{
    int numberOfWords = 0;
    size_t i;

    if (isalpha(sentence[0]))
    {
        numberOfWords++;
    }

    for (i = 1; i < sentence.length(); i++)
    {
        if ((isalpha(sentence[i])) && (!isalpha(sentence[i-1])))
        {
            numberOfWords++;
        }
    }

    return numberOfWords;
}

