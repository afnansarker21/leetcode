# used this code from Neetcode to learn 

# instead of converting integer to string, you use modulus and division to break down a number

class Solution:
    def isPalindrome(self, x: int) -> bool:
        # 1. is this value negative?
        if x < 0: return False
        
        # determination stage
        div = 1 # initially starts with 1
        while x >= 10 * div:
             div *= 10
        # 121 becomes at least 100 (first digit)
        
        while x:
            right = x % 10 # 1
            left = x // div # 1
            # after, you break down the 
            if left != right: return False

            x = (x % div) // 10
            div = div // 100

        return True



