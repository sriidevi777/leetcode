class Solution(object):
    def isValid(self, s):
        par = dict(('()', '[]', '{}'))
        stack = []
        for i in s:
            if i in '([{':
                stack.append(i)
            elif len(stack) == 0 or i != par[stack.pop()]:
                return False
        return len(stack) == 0
