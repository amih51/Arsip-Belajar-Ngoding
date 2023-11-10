from datetime import datetime

# Fungsi untuk menghitung durasi antara dua waktu
def calculate_duration(start_time, end_time):
    start_datetime = datetime.strptime(start_time, '%H : %M : %S')
    end_datetime = datetime.strptime(end_time, '%H : %M : %S')
    duration = end_datetime - start_datetime
    return duration

# Baca input tanggal mulai
start_date = input().strip().split()
start_day = int(start_date[1])

# Baca waktu mulai
start_time = input().strip()

# Baca input tanggal selesai
end_date = input().strip().split()
end_day = int(end_date[1])

# Baca waktu selesai
end_time = input().strip()

# Hitung selisih hari
days_difference = end_day - start_day

# Jika peristiwa berlangsung pada hari yang sama, hitung durasi
if days_difference == 0:
    duration = calculate_duration(start_time, end_time)
else:
    # Jika peristiwa melibatkan perpindahan hari, hitung durasi dalam detik
    duration = (days_difference - 1) * 24 * 60 * 60  # Detik dalam sehari
    duration += (24 * 60 * 60) - (datetime.strptime(start_time, '%H : %M : %S').second)
    duration += datetime.strptime(end_time, '%H : %M : %S').second

# Konversi durasi ke hari, jam, menit, dan detik
days = duration.days
seconds = duration.seconds
hours, remainder = divmod(seconds, 3600)
minutes, seconds = divmod(remainder, 60)

# Output hasil
print(f"{days} Hari")
print(f"{hours} Jam")
print(f"{minutes} Menit")
print(f"{seconds} Detik")
