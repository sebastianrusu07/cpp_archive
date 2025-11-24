bool isVowel(char c){
    c=tolower(c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')return true;
    return false;
}

int nr_vocale(char c[]){
    int sumVoc = 0;
    for(int i=0;c[i]!='\0';i++){
        if(isVowel(c[i]))sumVoc++;
    }
    return sumVoc;
}