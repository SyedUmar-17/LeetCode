int countValidPrefixes(char* s) {
    int one=0;
    int zero=0;
    int count=0;
    for(int i=0;s[i]!='\0';i++){

        if(s[i]=='0'){

            zero++;
        }else{

            one++;
        }
        if(abs(zero-one)<=1){
            count++;
        }
    }
    return count;
}