class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int n=cardPoints.size();int lsum=0;
       int i=k-1;int j=n;int rsum=0;int maxi=0;
       for(int a=0;a<k;a++) lsum+=cardPoints[a];
       while(i>=0){
           maxi=max(maxi,(lsum+rsum));
           lsum-=cardPoints[i];
           i--;
           j--;
           rsum+=cardPoints[j];
       }
        maxi=max(maxi,(lsum+rsum));
       
        return maxi;
    }
};