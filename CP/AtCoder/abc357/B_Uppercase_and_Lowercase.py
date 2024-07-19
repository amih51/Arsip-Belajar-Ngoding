s = input()

low = 0
for c in s:
    if c.islower():
        low += 1
        
if low > len(s)//2:
    print(s.lower())
else:
    print(s.upper())