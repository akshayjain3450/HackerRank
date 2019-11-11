# Enter your code here. Read input from STDIN. Print output to STDOUT
from cmath import phase

comp = input()

print(abs(complex(comp)))
print(phase(complex(comp)))
