class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0,i=x;
        while(x!=0)
        {
            int a=x%10;
            if(rev>INT_MAX/10||(rev==INT_MAX/10 && a>7))
            return(false);
            if(rev<INT_MIN/10||(rev==INT_MIN/10 && a<-8))
            return(false);
            rev=rev*10+a;
            x/=10;
        }
        if(rev==i && rev>=0)
        {
            return(true);
        }
        else
        return(false);
    }
};