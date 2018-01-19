if __name__ == '__main__':
    n = int(input())
    for i in range(0,n):
        l, b, h = input().split()
        l = int(l)
        b = int(b)
        h = int(h)
        area = (2*l*b) + (2*b*h) + (2*l*h)
        volume = l * b * h
        print( area, volume)
