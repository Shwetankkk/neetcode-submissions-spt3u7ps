class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> mp;
        unordered_map<int, int> cp;
        
        for(auto c : s){mp[c]++;}
        for(auto k : t){cp[k]++;}
        
        return mp==cp;

        //in this approach what we have done is we used two hashmaps and used two ranged based loops and compared the two hashmaps for same element and frequency and returned accordingly.


        
    }
};
