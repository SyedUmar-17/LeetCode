#include <stdlib.h>
#include <string.h>


char * mergeAlternately(char * word1, char * word2){
    int n1=strlen(word1);

    int n2=strlen(word2);
    int i=0;
    int j=0;
    int k=0;

    char *ans = (char *)malloc((n1 + n2 + 1) * sizeof(char));
    while(i<n1||j<n2){

        if(i<n1){
            ans[k++]=word1[i++];
        }
        if(j<n2){
            ans[k++]=word2[j++];
        }
    }
    ans[k]='\0';
    return ans;
}