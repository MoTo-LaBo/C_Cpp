# CMakeのバージョンを設定
# cmake_minimum_required(VERSION 2.8)
cmake_minimum_required(VERSION 3.15)

# プロジェクト名と使用する言語を設定
project(test_cmake CXX)

# hello という実行ファイルを main.cppから作成
add_executable(class_test src/main.cpp)
