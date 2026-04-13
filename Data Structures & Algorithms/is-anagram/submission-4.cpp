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
      for( auto k : t){
        arr[k-'a']--;
      }

      bool allzero = all_of(begin(arr),end(arr),[](int x){return x==0;});

      return allzero;
    }
};

//what we have done here is used the concept of frequency array and lambda function to check if the array is all zero after adding and deleting.