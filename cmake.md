# cmake compile
- cMake の biuld の仕方 : [CMake の使い方](https://qiita.com/shohirose/items/45fb49c6b429e8b204ac)

### 1. src dir と同じ所に CMakeLists.txt
    # CMakeのバージョンを設定
    cmake_minimum_required(VERSION 3.15)

    # プロジェクト名と使用する言語を設定
    project(test_cmake CXX)

    # hello という実行ファイルを main.cpppから作成
    add_executable(hello src/main.cpp)

### 2. src dir と同じ所に build dir 作成
    # 1. 移動 -> cmake
    cd build
    cmake ..

    # cmake がないので
    brew install cmake

    # Makefile が作成される
    cmake ..

    # 2. make command が使用できるようになる -> make = complie
    make

    # 3. 実行 file ができる -> 実行
    ./hello

    >> Hello World

### 3. Tree ( ※ 一部省略)
    .project dir
    ├── CMakeLists.txt
    ├── build
    │   ├── CMakeCache.txt
    │   ├── CMakeFiles
    │   ├── Makefile
    │   ├── cmake_install.cmake
    │   └── hello
    └── src
        └── main.cpp

### 4. 各種 dirctory & file
1. src
    - 実行 file

2. CMakeLists.txt
    - version, 使用言語, 実行 file名 & 実行 file
    - compile する ルールを記述

3. build
    - 監修的なモノ (CMake を使用する時は build dir を作ってその中で compile)
    - build dir で compile
    - CMakeLists.txt と同じ階層に作成

    ```
    cmake ..　-> .. = 一つ前の dir の CMakeLists.txt を参照してという指示
    ```
    - Makefile がある dir では　**make**　command が使用できる

    ```
    make　=　compile を実行する command　->　biuld の中で 実行できる
    ```

