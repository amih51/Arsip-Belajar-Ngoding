def grad(x1, y1, x2, y2):
    return (y1 - y2) / (x1 - x2)

def find_c(m, x, y):
    return y - x * m

for _ in range(int(input())):
    x1, y1, x2, y2, x3, y3, x4, y4 = map(int, input().split()) 

    if x1 > x2:
        x1, x2 = x2, x1
    if y1 > y2:
        y1, y2 = y2, y1
    if x3 > x4:
        x3, x4 = x4, x3
        y3, y4 = y4, y3

    res = False
    p = y3 - y4
    q = x3 - x4
    if not (x4 < x1 or x3 > x2 
            or (y3 < y1 and y4 < y1) 
            or (y3 > y2 and y4 > y2)
            or (x1 < x3 < x2 and y1 < y3 < y2
                and x1 < x4 < x2 and y1 < y4 < y2)):
        if q == 0:
            # print("ver")
            if x1 <= x3 <= x2:
                res = True
        elif p == 0:
            # print("hor")
            if y1 <= y3 <= y2:
                res = True
        else:
            m = grad(x3, y3, x4, y4)
            c = find_c(m, x3, y3)
            if m > 0:
                # print("pos")
                c1 = find_c(m, x1, y2)
                c2 = find_c(m, x2, y1)

                if c2 <= c <= c1:
                    res = True
            else:
                # print("neg")
                c1 = find_c(m, x1, y1)
                c2 = find_c(m, x2, y2)

                if c1 <= c <= c2:
                    res = True
    
    if res:
        print("YA")
    else:
        print("TIDAK")

