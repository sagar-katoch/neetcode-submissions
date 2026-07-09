class Solution {
public:
    int maxArea(vector<int>& height) {
                
int i=0;
int j=height.size()-1;
long long  ans=INT_MIN;
while(i<j){
int width=j-i;
int h=min(height[i],height[j]);


long long area= (long long)(width*h);
ans= max(ans,area);
if(height[i]>height[j]){
    j--;
}
else {
    i++;
}



}


return ans;
    }
};
