def isValid(s):
    stack = []
    pairs = {')': '(', '}': '{', ']': '['}

    for ch in s:
        if ch in pairs.values():
            stack.append(ch)
        else:
            if not stack or stack.pop() != pairs.get(ch):
                return False

    return len(stack) == 0

print(isValid("()[]{}"))