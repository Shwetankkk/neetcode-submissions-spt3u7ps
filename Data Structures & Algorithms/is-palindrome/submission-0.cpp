class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int right = n-1;
        int left = 0;

        while(left<right){
        
            if(!isalnum(s[left])){
                left++;
                continue;
            }
            if(!isalnum(s[right])){
                right--;
                continue;
            }

            if(tolower(s[right])!=tolower(s[left])){
                return false;
            }

            right--;
            left++;

        } 

        return true;
        
    }
};