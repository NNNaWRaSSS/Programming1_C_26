# Lab Session 11 Pointers

## Configure and build

From inside `Lab_Session_11`:

```bash
conda activate c_lab11
cmake -S . -B build
cmake --build build
```

## Run an example

macOS, Linux, or WSL:

```bash
./build/pointer_basics
```

Windows PowerShell:

```powershell
.\build\pointer_basics.exe
```

Replace `pointer_basics` with any target declared in `CMakeLists.txt`.
