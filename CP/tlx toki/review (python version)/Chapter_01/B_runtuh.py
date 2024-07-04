R, C = map(int, input().split())

matrix = [[int(c) for c in input()] for _ in range(R)]

def dell(r):
    for i in range(C):
        matrix[r][i] = 0
        
def check(r):
    for i in range(C):
        if matrix[r][i] == 0:
            return False
        
    return True

def drop(r):
    for i in range(C):
        count = 0
        j = 0
        while j < R and not (j >= r and matrix[j][i] == 1):
            if matrix[j][i] == 1:
                matrix[j][i] = 0
                count += 1
            j += 1
            
        j -= 1
        for k in range(count):
            matrix[j-k][i] = 1
            
while True:
    lanjut = False
    bottom = 0
    for i in range(R):
        if check(i):
            dell(i)
            lanjut = True
            bottom = i

    if not lanjut:
        break
    
    drop(bottom)
        
for i in range(R):
    for j in range(C):
        print(matrix[i][j], end='')
    print()
