class Solution:
    def __init__(self):
        self.ans = []
        self.n = 0
    
    def dfs(self, nums, i):
        if i >= self.n:
            self.ans.append(nums)
            return
        self.dfs(nums.copy(), i + 1)
        nums.append(i)
        self.dfs(nums.copy(), i + 1)
        
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        self.n = len(nums)
        self.dfs([], 0)
        # print(self.ans)
        # res = [map(lambda x: nums[x], l) for l in self.ans]
        res = []
        for l in self.ans:
            res.append(list(map(lambda x: nums[x], l)))
        return res