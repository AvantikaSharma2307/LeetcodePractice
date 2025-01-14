class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0;int j=0;int afreq=0;int bfreq=0;int cfreq=0;
        int count=0;int n=s.size();
        while(j<n){
            if(s[j]=='a') afreq++;
            else if(s[j]=='b') bfreq++;
            else cfreq++;
            while(afreq>=1 && bfreq>=1 && cfreq>=1){
                 count+=(n-j);
                 if(s[i]=='a') afreq--;
                 else if(s[i]=='b') bfreq--;
                 else cfreq--;
                 i++;

            }
            j++;
        }
        return count;
    }
};