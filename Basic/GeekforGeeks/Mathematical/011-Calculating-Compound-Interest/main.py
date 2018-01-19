import math

if __name__ == '__main__':
    n = int(input())
    for i in range(0,n):
        P = int(input())
        T = int(input())
        N = int(input())
        R = int(input())
        A = P*((1 + (R/100)/N )**( N*T))
        print( math.floor(A))