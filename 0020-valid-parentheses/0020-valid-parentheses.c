bool isValid(char* s) {
    
    int n=strlen(s);
    char stack[n];
    int top=-1;

    for(int i=0;s[i]!='\0';i++){
        char c=s[i];
        if(c=='('||c=='{'||c=='['){
            stack[++top]=c;

        }else{
            if(top==-1){
                return false;
            }
            char topchar=stack[top--];
            if(c==')'&&topchar!='('||c=='}'&&topchar!='{'||c==']'&&topchar!='['){

                return false;
            }
        }
    }

    return top==-1;
}