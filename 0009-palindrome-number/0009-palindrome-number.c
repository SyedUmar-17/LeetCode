bool isPalindrome(int x) {
    double rev=0,rem,original=x;
    while(x>0){
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }

    if(rev==original)

        return true;
    else
        return false;
}