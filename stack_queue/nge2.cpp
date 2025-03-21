class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            int n = nums2.size();
            vector<int> nextGreater(n, -1); // Stores next greater elements for nums2
            stack<int> st;
    
            // Step 1: Compute next greater elements for nums2
            for (int i = n - 1; i >= 0; i--) {
                while (!st.empty() && st.top() <= nums2[i]) {
                    st.pop();
                }
                if (!st.empty()) {
                    nextGreater[i] = st.top();
                }
                st.push(nums2[i]);
            }
    
            // Step 2: Find results for nums1 using nums2 indices
            vector<int> ans;
            for (int num : nums1) {
                for (int i = 0; i < n; i++) {
                    if (nums2[i] == num) {
                        ans.push_back(nextGreater[i]);
                        break;
                    }
                }
            }
    
            return ans;
        }
    };