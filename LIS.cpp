/**
 * Description: Longest Increasing Subsequence 
 * Usage: LIS O(N lg(N))
 * Source: https://github.com/dragonslayerx 
 */

int LIS(const vector<int> &a, int n){
    vector<int> lis;
    lis.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        vector<int>::iterator pos = upper_bound(lis.begin(), lis.end(), a[i]);
        if (pos == lis.end()) {
            lis.push_back(a[i]);
        } else {
            int idx = pos - lis.begin();
            lis[idx] = a[i];
        }
    }
    return lis.size();
}