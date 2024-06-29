def jarak(x1, y1, x2, y2):
    return ((x1 - x2)**2 + (y1 - y2)**2)**0.5

x1, y1, r1 = map(int, input().split())
x2, y2, r2 = map(int, input().split())

r = jarak(x1, y1, x2, y2) 
if r > r1 + r2 or r < abs(r1 - r2):
    print("tidak bersentuhan")
else:
    print("bersentuhan")