class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(n==0)    return;
        else if(m==0){
            nums1=nums2;
            return;
        } 
        
        int p1=m-1;
        int p2=n-1;
        int i=m+n-1;

        while(p1>=0 && p2>=0)
        {
            if(nums1[p1]>nums2[p2])
            {
                nums1[i]=nums1[p1];
                p1--;
            }
            else
            {
                nums1[i]=nums2[p2];
                p2--;
            }
            i--;
        }
        while(p1>=0)
        {
            nums1[i]=nums1[p1];
            p1--;i--;
        }
        while(p2>=0)
        {
            nums1[i]=nums2[p2];
            p2--;i--;
        }
    }
};