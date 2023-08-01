s1 = ''.join(filter(lambda x: x.lower() in 'aiueo', input()))
s2 = ''.join(filter(lambda x: x.lower() in 'aiueo', input()))
s3 = ''.join(filter(lambda x: x.lower() in 'aiueo', input()))

if len(s1) == 5 and len(s2) == 7 and len(s3) == 5 :
    print("YES")
else:
    print("NO")