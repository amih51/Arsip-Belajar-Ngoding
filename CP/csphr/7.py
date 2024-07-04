def count_complete_stars(N):
    if N % 2 == 0:
        return N // 2
    else:
        return (N // 2) + 1

# Membaca jumlah kasus uji

# Membaca dan memproses setiap kasus uji
N = int(input())
result = count_complete_stars(N)
print(result)
