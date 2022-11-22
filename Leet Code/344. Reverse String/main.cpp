class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int st = 0;
        int e = s.size() - 1;
        
        for(int i = 0; i < e; i++){
            swap(s[st++], s[e--]);
        }
    }
};