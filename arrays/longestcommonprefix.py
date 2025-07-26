# learnt how to solve this problem by watching a video tutorial by NeetCode

from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
      # 1. initialise the result => we want to assume from the start that there is no common prefix 
      res = ""
      # 2. iterate through all the strings (use a for loop)
      for i in range (len(strs[0])): # stop the for loop earlier
        for s in strs:
            if i == len(s) or s[i] != strs[0][i]: 
                return res # if there is no common prefix (8-9)
        # 3. print the result if there are common prefix 
        res += strs[0][i]
      return res

# Test cases
sol = Solution()

print(sol.longestCommonPrefix(["flower", "flow", "flight"]))  

