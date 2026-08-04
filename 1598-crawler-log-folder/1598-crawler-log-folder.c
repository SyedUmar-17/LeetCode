int minOperations(char** logs, int logsSize) {
    int dept=0;
    for(int i=0;i<logsSize;i++){
        if(logs[i][0]=='.'&&logs[i][1]=='.'){
            if(dept>0){
                dept--;
            }
        }else if(logs[i][0]=='.'&&logs[i][1]=='/'){
            continue;

        }else{
            dept++;
        }
    }
    return dept;
}