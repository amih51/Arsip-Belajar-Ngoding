A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

def dot(a, b, c):
    x1 = b[0] - a[0]
    x2 = c[0] - a[0]
    y1 = b[1] - a[1]
    y2 = c[1] - a[1]
    return x1*x2 + y1*y2 == 0

if dot(A, B, C) or dot(B, C, A) or dot(C, B, A):
    print("Yes")
else:
    print("No")
