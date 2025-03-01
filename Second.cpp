class Solution {
public:
int nofbits(int n){
    int sum=0;
    while(n!=0){
        int ans=n%2;
        n=n/2;
        if(ans==1){
            sum+=1;
        }
    }
    return sum;
}
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> arr2;
        vector<int>arr3;
        for(int i=0;i<arr.size();i++){
            arr2.push_back({arr[i],nofbits(arr[i])});
        }
        sort(arr2.begin(),arr2.end(),[](pair<int,int> a,pair<int,int> b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second<b.second;
        });
        for(auto it:arr2){
           arr3.push_back(it.first); 
        }
        return arr3;
    }
};
