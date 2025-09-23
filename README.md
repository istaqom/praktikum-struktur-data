# Praktikum Struktur Data Kelas C

## Prequisite (Setup Environment C++)

### Windows
- Install MinGW-w64 (GCC/G++ untuk Windows) via: [WinLibs](https://winlibs.com/#download-release)
- Ekstrak, lalu tambahkan folder `bin` ke PATH. Cek dengan:
  - PowerShell: `g++ --version`

### Linux
- Ubuntu/Debian:
  ```bash
  sudo apt update && sudo apt install -y build-essential
  ```
- Fedora:
  ```bash
  sudo dnf install -y gcc-c++ make
  ```
- Arch/Manjaro:
  ```bash
  sudo pacman -S --needed base-devel
  ```

### macOS
- Install Xcode Command Line Tools:
  ```bash
  xcode-select --install
  ```
- Alternatif (Homebrew GCC):
  ```bash
  brew install gcc
  ```

## Cara Compile & Run

> Catatan: Bisa juga menggunakan perintah `c++` sebagai pengganti `g++`. Tetapi cara ini tidak berlaku pada banyak sistem operasi

> Perhatikan Direktori ketika Compile & Run

### Windows (PowerShell)
- Contoh compile dan run satu berkas:
  ```powershell
  g++ ".\Minggu 1\1-1 Char.cpp" -std=c++17 -O2 -o ".\Minggu 1\1-1 Char.exe"; ".\Minggu 1\1-1 Char.exe"
  ```

### Linux/macOS (Terminal)
- Contoh compile dan run satu berkas:
  ```bash
  g++ "Minggu 1/1-1 Char.cpp" -std=c++17 -O2 -o "Minggu 1/1-1 Char" && ./"Minggu 1/1-1 Char"
  ```

## Struktur Materi (Ringkas)
- `Minggu 1/`
  - `1-1 Char.cpp`: Dasar tipe `char`
  - `1-2 Array.cpp`: Dasar array C-style
  - `1-3 String.cpp`: Dasar `std::string`
  - `1-4 Using Namespace Std.cpp`: Penjelasan `using namespace std;`
- `Minggu 2/`
  - `2-1 Vector.cpp`: Dasar `std::vector` (tanpa <algorithm>)
- `Materi Kelas/`
  - `1-1 Tipe Data Dasar.cpp`: Tipe dasar, `sizeof`, casting
  - (Opsional) `1-2 Array Dasar.cpp`, `1-3 String Dasar.cpp` jika tersedia

## Info
- Gunakan `-std=c++17` (atau lebih baru) untuk konsistensi compile.
- Jika file atau folder mengandung spasi, gunakan tanda kutip seperti contoh di atas.
- Flag `-o` digunakan untuk menentukan nama file output (executable). Contoh: `-o "nama_file.exe"` atau `-o "nama_file"`.