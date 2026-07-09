#include<bits/stdc++.h>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;

        }

        vector<int>result;
      

       int cnt=0;
vector<pair<int, int>> freqVec;
for (auto const& [val, freq] : mpp) {
    freqVec.push_back({freq, val});
}
sort(freqVec.rbegin(), freqVec.rend());

for(int i=0;i<freqVec.size();i++){

if(cnt<k){
    result.push_back(freqVec[i].second);
    cnt++;
}




}

return result;
     
    }
};