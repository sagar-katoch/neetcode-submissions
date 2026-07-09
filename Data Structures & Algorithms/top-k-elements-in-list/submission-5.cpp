#include<bits/stdc++.h>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;

        }

        vector<int>result;
      
           vector<pair<int,int>>ans;  // stores frequency,element

           for(auto it :mpp){
         ans.push_back({it.second,it.first});
           }
   sort(ans.begin(),ans.end(),greater<pair<int,int>>());
   for(int i=0;i<k;i++){
    result.push_back(ans[i].second);
   }
     return result;
    }
};