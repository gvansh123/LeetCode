class Solution {
     char val(char c)
     {
        if(c>='a'&&c<='z')
        return c;
        if(c>='A'&&c<='Z')
        return c+('a'-'A');
        if(c>='0'&&c<='9')
        return c;
        return ' ';
     } 
public:
    bool isPalindrome(string s) {
        
       int f=0;
       int l=s.length()-1;
        while(f<l)
        {
            char a=val(s[f]);
            char b=val(s[l]);
            if(a==' ')
            {
                f++;
                continue;
            }
            if(b==' ')
            {
                l--;
                continue;
            }
            if(a!=b)
            {
                return false;
            }
            else
            {
                f++;
                l--;
            }
        }
        return true;
    }
};