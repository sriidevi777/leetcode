class Solution(object):
    def recoverOrder(self, order, friends):
        """
        :type order: List[int]
        :type friends: List[int]
        :rtype: List[int]
        """
        a=[]
        for o in order:
            if o in friends:
                a.append(o)
        return a