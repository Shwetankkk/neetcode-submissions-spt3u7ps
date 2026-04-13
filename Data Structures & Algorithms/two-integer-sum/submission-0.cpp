class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int key = target - nums[i];
            auto it = mp.find(key);
            if(it!=mp.end()){
                return {it->second,i};
            }
            mp[nums[i]] = i;
        }

        return {};
        
    }
};
