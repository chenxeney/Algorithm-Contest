
from functools import cmp_to_key
def cm(a, b):
	if(a>b): return -1
	else: return 1
nums = [1, 3, 2, 4]
nums.sort(key=cmp_to_key(cm))
print(nums)