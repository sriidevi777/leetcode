class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        ws = s.strip().split()        
        if not ws:
            return 0        
        return len(ws[-1])
