input_string = input()

# Cari karakter terbesar berdasarkan nilai ASCII
largest_char = max(input_string, key=ord)

# Filter hanya karakter terbesar dari input
# filtered_chars = filter(lambda x: x == largest_char, input_string)

# Gabungkan karakter-karakter terbesar menjadi satu string
result = "".join(filter(lambda x: x == largest_char, input_string))

print(result)
