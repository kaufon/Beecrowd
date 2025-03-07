class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        ans = "".join(e for e in s if e.isalnum())
        return ans == ans[::-1]


Solution.isPalindrome(1, "ta a bat")
