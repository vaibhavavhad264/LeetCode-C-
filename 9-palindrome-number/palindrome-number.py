class Solution:
    def isPalindrome(self, x) -> bool:
        n = str(x)
        if x < 0 :        
            return False
    
        return n == n[ : : -1]
        