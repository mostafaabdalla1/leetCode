class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
			// if (m == 0)
			// 	nums1 = nums2;

			// else {
			// 	int idx1 = 0, idx2 = 0, idx3 = m;
			// 	nums1.erase(nums1.begin() + m, nums1.end());
			// 	while (idx1 < m && idx2 < n)
			// 	{
			// 		if (nums1[idx1] < nums2[idx2])
			// 			nums1.push_back(nums1[idx1++]);
			// 		else
			// 			nums1.push_back(nums2[idx2++]);
			// 	}
			// 	while (idx1 < m)
			// 		nums1.push_back(nums1[idx1++]);

			// 	while (idx2 < n)
			// 		nums1.push_back(nums2[idx2++]);

			// 	nums1.erase(nums1.begin(), nums1.begin() + m);
			// }
        vector<int> nums3(n+m);
        if (m == 0)
            nums1 = nums2;
        else 
        {
            int i = 0;
            int j = 0;
            int k = 0;
            while (i < m && j < n)
            {
                if (nums1[i] <= nums2[j])
                    nums3[k++] = nums1[i++];

                else nums3[k++] = nums2[j++];
            }
            while (i < m) { nums3[k++] = nums1[i++]; }
            while (j < n) { nums3[k++] = nums2[j++]; }
            nums1 = nums3;
        }	
    }
};