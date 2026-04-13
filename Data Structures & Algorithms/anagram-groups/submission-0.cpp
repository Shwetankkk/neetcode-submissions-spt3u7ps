class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result; //because in the end we want to return a vector containing strings
        unordered_map<string,vector<string>> mp;
        int n = strs.size();

        for(int i =0;i<n;i++){
            string temp = strs[i];
            sort(begin(temp),end(temp));
            mp[temp].push_back(strs[i]);
        }

        for (auto c : mp){
            result.push_back(c.second);
        }

        return result;
        
    }
};
 //TC : m(nlogn) //SC :     O(n)