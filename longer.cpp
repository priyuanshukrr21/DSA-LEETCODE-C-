def longest_consecutive(nums):
    numbers = set(nums)
    longest = 0

    for num in numbers:
        if num - 1 not in numbers:
            length = 1

            while num + length in numbers:
                length += 1

            longest = max(longest, length)

    return longest

print(longest_consecutive([100, 4, 200, 1, 3, 2]))