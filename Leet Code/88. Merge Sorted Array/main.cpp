class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        int i = 0;
        while(i <= n-1){
            nums1[m] = nums2[i];
            m++;
            i++;
        }
        sort(nums1.begin(), nums1.end());
    }
};