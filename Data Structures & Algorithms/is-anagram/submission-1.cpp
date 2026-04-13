class Solution {
public:
    bool isAnagram(string s, string t) {

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){return true;}
        return false; 
        //this was the brute force which can only be done if you ask first whether sorting is allowed during the inteview
        //the drawback is we are doing sorting twice which gives the TC to O(slogs + tlogt) and space complexity is O(1)
        
        
    }
};
