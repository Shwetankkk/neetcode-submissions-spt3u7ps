class Solution {
public:
    bool isAnagram(string s, string t) {
        int a = s.size();
        int b = t.size();
        if(a!=b){return false;}

        vector<int> arr(26,0);

        for(auto c : s){
            arr[c-'a']++;
        }

        for(auto k : t){
            arr[k-'a']--;
        }

        bool ans = all_of(begin(arr),end(arr),[](int x){ return x==0;

        });  

        //it is called lambda function

        return ans;
        
    }
};
