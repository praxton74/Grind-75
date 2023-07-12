class Solution {
public:
    int findMin(vector<int>& nums) {
        int start  = 0;
        int end = nums.size() - 1;
        while (start < end) 
        {
            int mid = start + (end - start)/2;
            if (nums[mid] > nums[end]) 
            {
                start = mid + 1;

            } 
            else
            {
                end = mid;
            }

            /* else
            {
                end--;                     //if duplicates are there
            }
                */
        }
        return nums[start];
    }
};
