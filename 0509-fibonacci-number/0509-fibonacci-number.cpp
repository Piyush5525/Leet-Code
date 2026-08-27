class Solution {
public:
    int fib(int n) {
        if(n<0 || n>30)
        return 0;
        int a=0,b=1,c;
        if(n<=1)
        return n;
        for(int i=2;i<=n;i++)
        {
            c=a+b;
           
            a=b;
            b=c;
           
        }
        return c;
    }
};