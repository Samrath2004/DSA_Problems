class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>left,right,middle;
        int i=0;
        while(i<nums.size()){
            if(nums[i]<pivot){
                left.push_back(nums[i]);
                i++;
            }
            else if(nums[i]>pivot){
                right.push_back(nums[i]);
                i++; 
            }
            else{
                middle.push_back(nums[i]);
                i++;
            }
        }
        left.insert(left.end(), middle.begin(), middle.end());
        left.insert(left.end(), right.begin(), right.end());
        return left;
    }
};
