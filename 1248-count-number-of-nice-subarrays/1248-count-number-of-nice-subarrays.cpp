class Solution {
public:
    int calculateno(vector<int>& nums,int k){
        if(k<0) return 0;
        int i=0;int j=0; int count=0;int odd=0;
        while(j<nums.size()){
            odd+=(nums[j]%2);
            while(odd>k){
                odd-=(nums[i]%2);
                i++;
            }
            count+=(j-i+1);
            j++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count=calculateno(nums,k)-calculateno(nums,k-1);
        return count;
    }
};