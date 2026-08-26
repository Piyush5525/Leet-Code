class Solution {
public:
    int reverse(int x) {
        int i=x,a,rev=0;
        while(i!=0)
        {
            a=i%10;
            if(rev>INT_MAX/10||(rev==INT_MAX/10 && a>7))
            return 0;
            if(rev<INT_MIN/10||(rev==INT_MIN/10 && a<-8))
            return 0;
            rev=rev*10+a;
            i/=10;
        }
        return(rev);
    }
};