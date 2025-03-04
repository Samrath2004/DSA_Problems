class Solution {
public:
    bool checkPowersOfThree(int n) {
        int rem;
        while(n!=0){
            rem=n%3;
            n=n/3;
            if(rem==2){
                return false;
            }
        }
        if(rem==1){
            return true;
        }
        else{
            return false;
        }
    }
};
