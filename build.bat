@echo off
g++ -Werror -std=c++11 src/*.cpp -o 8script.exe
call 8script.exe examples/test.8
