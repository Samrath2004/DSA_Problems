class Solution {
    int upperbound(vector<int>& nums1){
        int start=0;
        int end=nums1.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums1[mid]<0){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return start;
    }
        int lowerbound(vector<int>& nums2){
        int start=0;
        int end=nums2.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums2[mid]>0){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
public:
    int maximumCount(vector<int>& nums) {
        int pos=nums.size()-lowerbound(nums);
        int neg=upperbound(nums);
        return max(pos,neg);
    }
};
