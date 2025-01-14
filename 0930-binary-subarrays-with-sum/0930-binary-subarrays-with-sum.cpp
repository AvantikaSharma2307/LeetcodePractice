class Solution {
public:
    int calculateSum(vector<int>& nums,int goal){
        if(goal<0) return 0;
        int i=0;int j=0;int sum=0;int count=0;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>goal){
                sum=sum-nums[i];
                i++;
            }
            count=count+(j-i+1);
            j++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=calculateSum(nums,goal)-calculateSum(nums,goal-1);
       
        return count;
    }
};