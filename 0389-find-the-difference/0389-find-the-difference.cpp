class Solution {
public:
    char findTheDifference(string s, string t)
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        vector<int>fre(26,0);
        for(char c : s)
        {
            fre[c - 'a']++;
        }    
        for(char c : t)
        {
            fre[c - 'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(fre[i] != 0) return char(i + 'a');
        }
        return '\0';
    }
};