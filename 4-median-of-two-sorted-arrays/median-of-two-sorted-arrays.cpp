class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        if(v.size()%2!=0)
        {
            int n=v.size();
            return v[(n/2)];
        }
        else{
            int n=v.size();
            double k=v[n/2]+v[(n/2)-1];
            return k/2.0;
        }
        
    }
};