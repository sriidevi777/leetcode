class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       for(int i=1; i<gain.size(); i++){
          gain[i]+=gain[i-1];
       }

       int mx=0;
       for(auto num: gain){
          mx=max(mx,num);
       } 

       return mx;
    }
};