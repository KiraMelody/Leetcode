class Solution:
    def __init__(self):
        self.ans = []
        self.nums = []
        self.size = 0
        self.counter = {}
    
    def dfs(self, subset, i):
        if i >= self.size:
            self.ans.append(subset)
            return
        for t in range(0, self.counter[self.nums[i]]):
            self.dfs(subset.copy(), i + 1)
            subset.append(self.nums[i])
        self.dfs(subset.copy(), i + 1)
        
    def subsetsWithDup(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        def zero():
            return 0
        from collections import Counter
        self.counter = Counter(nums)
        self.nums = list(set(nums))
        self.size = len(self.nums)
        self.ans = []
        self.dfs([], 0)
        return self.ans