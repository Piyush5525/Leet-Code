class Solution {
public:
    bool isPalindrome(string s) {
        string p,cl="";
        if(s.length()<1 || s.length()>200000)
        return 0;
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                cl+=(char)tolower(ch);
            }
        }
        int len=cl.length();
        len=len-1;
        for(int i=len;i>=0;i--)
        {
        p+=cl[i];
        }
        if(p==cl)
        {
            return(true);
        }
        else
        {
            return(false);
        }

    }
};