class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        //vector<int>v;
        
       for(auto & i:nums){
           s.insert(i);
       }
       vector<int>v(s.begin(),s.end());
       nums=v;
       return nums.size();
    }
};