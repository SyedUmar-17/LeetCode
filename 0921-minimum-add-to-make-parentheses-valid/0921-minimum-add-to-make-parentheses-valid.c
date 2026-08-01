int minAddToMakeValid(char* s) {
    int ad=0;
    int od=0;
    for(int i=0;s[i]!='\0';i++){


        if(s[i]=='('){

            ad++;
        }else{

            if(ad>0){
                ad--;
            }else{
                od++;
            }
        }
    }
    return ad+od;
}