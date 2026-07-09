class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
if(nums.size()==0) return 0;
unordered_set<int>st;
for(int i=0;i<nums.size();i++){
    st.insert(nums[i]);
}

int longest=1;



    for(auto it : st){

if(st.find(it-1)==st.end()){

int cnt=1;
int element = it;

while(st.find(element+1)!=st.end()){
    cnt+=1;
    element+=1;
}
longest= max(longest,cnt);


}



    }


return longest;
    }
};
