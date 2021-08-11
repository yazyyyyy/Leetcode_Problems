//Problem link : https://leetcode.com/problems/reverse-words-in-a-string/
class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int i=0, j, n=s.length();
        while(i < n){
            while(i<n && s[i]==' ') i++;
            if(i>=n) break;
            j = i + 1;
            while(j<n && s[j] != ' ') j++;
            string w = s.substr(i, j-i);
            if(result == "") result=w;
            else result = w + " " + result;
            i = j + 1;
        }
        return result;
    }
};