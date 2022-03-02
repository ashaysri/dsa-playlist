class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()==0)
            return true;
        if(t.length()==0 || s.length()>t.length())
            return false;
        int a {}, b {};
        while(a<s.length() && b<t.length()){
            if(s[a]==t[b])
                a++;
            b++;
        }
        return a==s.length();
    }
};