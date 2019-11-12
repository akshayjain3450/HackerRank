from collections import OrderedDict

def merge_the_tools(string, k):
    # your code goes here
    length = len(string)
    factor = int(length/k)
    stringlist = list()
    j = 0
    for i in range(0,factor):
        stringlist.append(string[j:j+k])
        j += k

    for item in stringlist:
        res = ''.join(OrderedDict.fromkeys(item).keys())
        print(res)


if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
