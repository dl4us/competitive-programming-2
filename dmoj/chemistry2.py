#!python3
import math
N = int(input())
M = int(input())

def dec(beakers, cups):
    return (cups // (2**beakers)) + ((cups) % (2**beakers) >= 1)

for m in range(1, 1000000000000000000000000000000000000000000):
    poss = N
    for i in range(M):
        poss = dec(m, poss)
        if(poss == 1):
            break

    if(poss == 1):
        print(m)
        break