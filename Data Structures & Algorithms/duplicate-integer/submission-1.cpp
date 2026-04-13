class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        map<int,int> mp;
        for(auto num : nums){
            mp[num]++;
        }

        if(nums.size()!=mp.size()){
            return true;
        }
        return false;
        
    }
};