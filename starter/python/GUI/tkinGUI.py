import tkinter as tk
from tkinter import ttk
from tkinter.messagebox import showinfo

window = tk.Tk()
window.configure(bg="grey")
window.geometry("720x720")
window.resizable(False,False)
window.title("Nama")

# frame input
input_frame = ttk.Frame(window)

# penempatan Grid, Pack, Place
input_frame.pack(padx=10,pady=10,fill="x",expand=True)

# komponen-komponen
# 1. Label nama depan
nama_label = ttk.Label(input_frame,text="Nama:")
nama_label.pack(padx=10,pady=10,fill="x",expand=True)
# 2. entry nama depan
NAMA = tk.StringVar()
nama_entry = ttk.Entry(input_frame,textvariable=NAMA)
nama_entry.pack(padx=10,pady=10,fill="x",expand=True)
# 3. Tombol
def tombol_klik():
    print(NAMA.get())
    pesan = (f"Halo, {NAMA.get()}")
    showinfo(title="pesan",message=pesan)

tombol_nama = ttk.Button(input_frame,text="Kirim nama!",command=tombol_klik)
tombol_nama.pack(padx=10,pady=10,fill="x",expand=True)

window.mainloop()