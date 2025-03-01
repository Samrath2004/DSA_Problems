class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i=0;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                nums[i]=2*nums[i];
                nums[i+1]=0;
                i=i+2;
            }
            else{
                i=i+1;
            }
        }
 int nonZeroIndex = 0; 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[nonZeroIndex]);
            nonZeroIndex++;
        }
    }

        return nums;
    }
};
