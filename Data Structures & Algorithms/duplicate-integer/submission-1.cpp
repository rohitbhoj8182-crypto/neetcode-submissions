class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // SC - 0 TC  - nlogn
        // sort(nums.begin(),nums.end());
        // for(int i = 1 ; i < nums.size() ; i++) {
        //     if(nums[i-1] == nums[i]){
        //         return true;
        //     }


        // }
        // return false;
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }

        for(auto &it : mp){
            if(it.second > 1){
                return true;
            }
        }

        return false;
    }
};