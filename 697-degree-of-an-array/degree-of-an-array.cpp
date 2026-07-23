class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int degree=0;

        for(auto x:mp){
            degree=max(degree,x.second);
        }

        int ans=nums.size();

        for(auto x:mp){

            if(x.second==degree){

                int first=-1,last=-1;

                for(int i=0;i<nums.size();i++){

                    if(nums[i]==x.first){

                        if(first==-1)
                            first=i;

                        last=i;
                    }
                }

                ans=min(ans,last-first+1);
            }
        }

        return ans;
    }
};