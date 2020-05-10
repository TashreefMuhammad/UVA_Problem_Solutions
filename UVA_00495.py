
#%%

import sys

sys.setrecursionlimit(5001)

fib = [0]*5001

def compute(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    elif fib[n] != 0:
        return fib[n]
    else:
        fib[n] = compute(n-1) + compute(n-2)
        return fib[n]

while True:
    try:
        n = int(input())
        
        print("The Fibonacci number for " + str(n) + " is " + str(compute(n)))
    except EOFError:
        break
    