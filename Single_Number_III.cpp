class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int res=0;
        
        for(int i=0;i<32;i++){
            int zero=0;
            for(int j=0;j<nums.size();j++){
                if((nums[j]&(1<<i)) == 0)zero++;
                }
            
            if(zero%3 == 0)res+=1<<i;
            
        }
        return res;
        
        
    }
};
