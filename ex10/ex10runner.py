import os

s = "valgrind ./ex10 "

for i in range(65536):
    s += "a "

os.system(s)
