class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        int i=0;
        int n=nums.size();
        int j=n-1;
        while(i<nums.size()&&j>=i){
            if((nums[i]+nums[j]==target)&&(i!=j)){
              arr.push_back(i);
              arr.push_back(j);
              break;
            }
            else if(i==j){
                   j=n-1;
                   i++;
            }
            else if(nums[i]+nums[j]!=target){
                j--;
            }
            else{
                continue;
            }
        }
        return arr;
    }
};