class Solution {
public:
    bool isPalindrome(string s) {
        string new_s;

        for(char ch: s){
            if(isalnum(ch)) new_s+=tolower(ch);
        }


        int left = 0;
        int right = new_s.size()-1;

        while(left < right){
            if(new_s[left] != new_s[right]) return false;
            left ++;
            right --;

        }
        return true;

    }
};
