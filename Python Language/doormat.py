value = input().split(" ")
N = int(value[0])
M = int(value[1])

if N < 5 or N > 101 or M < 15 or M > 303:
    exit()

N = int((N+1)/2)

for i in range(1,N):
    temp1 = (i*2)-1
    temp2 = int((M-(3*temp1))/2)
    print("-"*(temp2)+".|."*(temp1)+"-"*(temp2))

temp3 = int((M-7)/2)
print("-"*(temp3)+"WELCOME"+"-"*(temp3))

i = N-1
while i > 0 and i < N:
    temp1 = (i*2)-1
    temp2 = int((M-(3*temp1))/2)
    print("-"*(temp2)+".|."*(temp1)+"-"*(temp2))
    i = i-1
