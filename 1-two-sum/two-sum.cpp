class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
         unordered_map<int, int> m;
        int a;
        for ( int i = 0; i < nums.size(); i ++) {
            a =  t - nums[i];
            if(m.find(a) != m.end()){
                return {m[a], i};
            }                
            m[nums[i]] = i;
        }
        return {};     
        
    }
};