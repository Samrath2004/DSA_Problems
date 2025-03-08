class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int size=blocks.size();
        int mini=INT_MAX;
        for(int i=0;i<size-k+1;i++){
            int count=0;
            for(int j=i;j<i+k;j++){
                if(blocks[j]=='W'){
                    count+=1;
                }
            }
         mini=min(mini,count);
        }
        return mini;
    }
};
