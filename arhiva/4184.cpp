void FNume(char s[], char id[])
{
    int index=0;
    while (s[index] != ' ' && s[index] != '\0')index++;

    int cnt = 0;
    for (int i = index + 1; s[i] != '\n' && s[i] != '\0'; i++)
    {
        id[cnt++] = s[i];
    }
    id[cnt++]='2';
    id[cnt++]='0';
    id[cnt++]='2';
    id[cnt++]='2';
    id[cnt] = '\0';
}