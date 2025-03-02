class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int first=0;
        int second=0;
        while(first<nums1.size()&&second<nums2.size()){
            if(nums1[first][0]==nums2[second][0]){
                ans.push_back({nums1[first][0],nums1[first][1]+nums2[second][1]});
                first++;
                second++;
            }
            else if(nums1[first][0]<nums2[second][0]){
                ans.push_back({nums1[first][0],nums1[first][1]});
                first++;
            }
            else{
                ans.push_back({nums2[second][0],nums2[second][1]});
                second++;
            }

            }
            while(first<nums1.size()){
                ans.push_back({nums1[first][0],nums1[first][1]});
                first++;
            }
             while(second<nums2.size()){
                ans.push_back({nums2[second][0],nums2[second][1]});
                second++;
            }
            return ans;
        
    }
};
