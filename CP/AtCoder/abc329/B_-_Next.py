N = int(input())
A = list(map(int, input().split()))

print(sorted(set(A), reverse=1)[1])