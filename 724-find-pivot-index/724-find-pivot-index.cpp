class Solution(object):
    def pivotIndex(self, nums):
        left_sum, right_sum, total_sum = 0,0,0
        for window_end in range(len(nums)):
            total_sum += nums[window_end]
        right_sum = total_sum - nums[0]
        if right_sum == 0:
            return 0
        for idx in range(1, len(nums)):
            left_sum += nums[idx - 1]
            right_sum -= nums[idx]
            if left_sum == right_sum:
                return idx
        return -1
        