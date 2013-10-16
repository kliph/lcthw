import os

s = "valgrind ./ex10 "

for i in range(1000000):
    s += "a "

os.system(s)
