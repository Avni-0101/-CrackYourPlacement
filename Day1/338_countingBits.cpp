class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        ans[0]=0;
        if(n>=1) ans[1]=1;

        for(int i=2;i<=n;i++)
        {
            if(i%2==1)
            {
                ans[i]++;
            }
            if(ans[i/2])
            {
                ans[i]+=ans[i/2];
            }
        }
        return ans;
    }
};