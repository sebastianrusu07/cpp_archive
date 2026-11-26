void FConcat(char s[], char d[]){
    int i=0,j=0;
    for(;s[i]!='\0';i++);
    for(;d[j]!='\0';j++){
        s[i]=d[j];
        i++;
    }
    s[i]='\0';
}