# Modul A — Input Process Output

## Input

| No | Input | Keterangan |
|---|---|---|
| 1 | Kode barang | Identitas barang |
| 2 | Nama barang | Nama barang |
| 3 | Stok awal | Jumlah stok awal |
| 4 | Barang masuk | Jumlah barang yang masuk |
| 5 | Barang terjual | Jumlah barang yang terjual |
| 6 | Stok minimum | Batas minimum persediaan |
| 7 | Harga beli | Harga beli barang per unit |

## Process

1. Menghitung stok tersedia dengan rumus:
   `stok tersedia = stok awal + barang masuk`

2. Memvalidasi jumlah barang terjual agar tidak melebihi stok tersedia.

3. Menghitung stok akhir dengan rumus:
   `stok akhir = stok tersedia - barang terjual`

4. Menentukan status persediaan:
   - Jika stok akhir = 0, status **Habis**.
   - Jika stok akhir < stok minimum, status **Menipis**.
   - Jika stok akhir >= stok minimum, status **Aman**.

5. Menentukan jumlah barang yang harus dipesan.
   - Jika status **Menipis** atau **Habis**, barang dipesan sampai stok mencapai dua kali stok minimum.
   - Jika status **Aman**, tidak ada pemesanan.

## Output

| No | Output | Keterangan |
|---|---|---|
| 1 | Kode barang | Menampilkan kode barang |
| 2 | Nama barang | Menampilkan nama barang |
| 3 | Stok awal | Menampilkan stok awal |
| 4 | Barang masuk | Menampilkan jumlah barang masuk |
| 5 | Barang terjual | Menampilkan jumlah barang terjual |
| 6 | Stok akhir | Menampilkan hasil stok setelah penjualan |
| 7 | Status stok | Menampilkan Aman, Menipis, atau Habis |
| 8 | Jumlah yang harus dipesan | Menampilkan jumlah barang yang perlu dipesan |
| 9 | Harga beli | Menampilkan harga beli barang |