from itertools import permutations

def generate_permutations(nums):
    return [list(p) for p in permutations(nums)]

print(generate_permutations([1, 2, 3]))