# Modul A — Pseudocode

MULAI

ULANGI

    INPUT kodeBarang
    INPUT namaBarang
    INPUT stokAwal
    INPUT barangMasuk

    stokTersedia ← stokAwal + barangMasuk

    INPUT barangTerjual

    SELAMA barangTerjual > stokTersedia
        TAMPILKAN "Jumlah barang terjual melebihi stok tersedia"
        INPUT barangTerjual
    SELESAI SELAMA

    stokAkhir ← stokTersedia - barangTerjual

    INPUT stokMinimum
    INPUT hargaBeli

    JIKA stokAkhir = 0 MAKA
        statusStok ← "Habis"
    LAIN JIKA stokAkhir < stokMinimum MAKA
        statusStok ← "Menipis"
    LAIN
        statusStok ← "Aman"
    AKHIR JIKA

    JIKA statusStok = "Menipis" ATAU statusStok = "Habis" MAKA
        jumlahPesan ← (2 × stokMinimum) - stokAkhir
    LAIN
        jumlahPesan ← 0
    AKHIR JIKA

    TAMPILKAN kodeBarang
    TAMPILKAN namaBarang
    TAMPILKAN stokAwal
    TAMPILKAN barangMasuk
    TAMPILKAN barangTerjual
    TAMPILKAN stokAkhir
    TAMPILKAN statusStok
    TAMPILKAN jumlahPesan
    TAMPILKAN hargaBeli

    INPUT ulang

SAMPAI ulang = "n"

SELESAI