class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> r;
        map<int,int>::iterator ite;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>::iterator t1=unique(nums1.begin(),nums1.end());
        nums1.erase(t1,nums1.end());
        vector<int>::iterator t2=unique(nums2.begin(),nums2.end());
        nums2.erase(t2,nums2.end());
        //add nums1 into r;
        int i=0;
        int j=0;
        while(i<nums1.size()&&j<nums2.size())
        {
           r[nums1[i++]]++;
           r[nums2[j++]]++;
        }
        while(i<nums1.size()) r[nums1[i++]]++;
        while(j<nums2.size()) r[nums2[j++]]++;
        vector<int> result;
        for(ite=r.begin();ite!=r.end();ite++)
        {
            if(ite->second>1)
            result.push_back(ite->first);
        }
        return result;
    }
};