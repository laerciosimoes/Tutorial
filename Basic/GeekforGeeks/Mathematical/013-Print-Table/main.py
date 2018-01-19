import math

if __name__ == '__main__':
    n = int(input())
    for i in range(0,n):
        p = int(input())
        res = [None] * 10
        for j in range(1,11):
            res[j-1] = str(p*j) 
        print(" ".join(res))