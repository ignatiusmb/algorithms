def utopianTree(n):    
    if n == 0: return 1
    res = 1
    for i in range(1, n+1):
        res = res * 2 if i % 2 else res + 1
    return res
