class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp;
        unordered_map<int,int> cp;
        for(auto x : s){mp[x]++;}
        for(auto y : t){cp[y]++;}
        return mp==cp;
        
    }
};
