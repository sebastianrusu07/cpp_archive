void UpperLower(const char a[], char U[], char L[]){
    int i=0;
    for(;a[i]!='\0';i++){
        if(!isalpha(a[i])){
            U[i]=a[i];
            L[i]=a[i];
        }else{
            U[i]=toupper(a[i]);
            L[i]=tolower(a[i]);
        }
    }
    U[i]='\0';
    L[i]='\0';
}