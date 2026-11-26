void complete(char words[105][105],int currentWord)
{
    const char templates[4][105]
    {
        "COLEGIUL",
        "LICEUL",
        "NATIONAL",
        "TEORETIC"
    };
    int whichWord;
    switch (words[currentWord][0])
    {
    case 'C':
        whichWord=0;
        break;
    case 'L':
        whichWord=1;
        break;
    case 'N':
        whichWord=2;
        break;
    case 'T':
        whichWord=3;
        break;
    default:
        return;
    }
    if (words[currentWord][strlen(words[currentWord])-1]!='.')
    {
        return;
    }
    const char* replacement = templates[whichWord];
    int len = strlen(replacement);
    for (int i = 0; i < len; i++)
    {
        words[currentWord][i]=replacement[i];
    }
    words[currentWord][len]='\0';
}

void Prescurtat(char s[])
{
    char words[105][105];

    int letterIdx=0,wordIdx=0;
    for (int i=0;i<=strlen(s);i++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            words[wordIdx][letterIdx]='\0';
            wordIdx++;
            letterIdx=0;
        }else
        {
            words[wordIdx][letterIdx++]=s[i];
        }
    }
    int wordCount = wordIdx;
    for (int i=0;i<wordCount;i++)
    {
        complete(words,i);
    }
    strcpy(s,"");
    for (int i=0;i<wordCount;i++)
    {
        strcat(s,words[i]);
        if (i!=wordCount - 1)
        {
            strcat(s," ");
        }
    }
}