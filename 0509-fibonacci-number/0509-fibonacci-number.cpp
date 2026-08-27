class Solution {
public:
    int fib(int n) {
        if(n<0 || n>30)
        return 0;
        int a=0,b=1,c;
        if(n==0)
        return a;
        if(n==1)
        return b;
        for(int i=1;i<n;i++)
        {
            c=a+b;
            if(c>INT_MAX/10 || (c==INT_MAX/10 && c%10>7))
            return 0;
            if(c<INT_MIN/10 || (c==INT_MIN/10 && c%10<-8))
            return 0;
            a=b;
            b=c;
           
        }
        return c;
    }
};