import math

if __name__ == '__main__':
    n = int(input())
    for i in range(0,n):
        P = int(input())
        T = int(input())
        R = int(input())
        A = P* (R/100) * T
        print(math.floor(A))