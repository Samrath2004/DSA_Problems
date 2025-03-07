class Solution {
public:
    bool checkPrime(int num) {
        if (num < 2) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
    vector<int> findPair(vector<int>& primes) {
        if (primes.size() < 2) return {-1, -1};
        int minDiff = INT_MAX;
        vector<int> result(2);
        for (int i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                result = {primes[i - 1], primes[i]};
            }
        }
        return result;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        for (int i = left; i <= right; i++) {
            if (checkPrime(i)) {
                primes.push_back(i);
            }
        }
        return findPair(primes);
    }
};
