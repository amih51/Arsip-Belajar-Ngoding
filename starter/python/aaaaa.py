xk = list(map(int, input().split()))
x = xk[0]
k = xk[1]
P = input()
if eval(P) == k:
    print(True)
else:
    print(False)
# x, k = map(int, input().split())
# s = list(map(str, input().split()))
# total = 0
# minus = 0
# for i in s:
#     if i[0] == 'x':
#         if len(i) == 1:
#             if minus == 0 :
#                 total += x
#             else:
#                 total -= x
#                 minus = 0
#         else:
#             power = int(i[3:])
#             if minus == 0 :
#                 total += pow(x,power)
#             else:
#                 total -= pow(x,power)
#                 minus = 0
#     elif i == '+' :
#         continue
#     elif i == '-' :
#         minus += 1
#     else:
#         if len(i) <= 2:
#             if minus == 0:
#                 total += int(i)
#             else:
#                 total -= int(i)
#         else:
#             power = int(i[5:])
#             if minus == 0 :
#                 total += pow(x,power)
#             else:
#                 total -= pow(x,power)
#                 minus = 0
# if total==k :
#     print(True)
# else:
#     print(False)
