if __name__ == '__main__':
    s = input()
    alnumflag = False
    alphaflag = False
    digitflag = False
    lowerflag = False
    upperflag = False

    for item in s:
        if item.isalnum():
            alnumflag = True

        if item.isalpha():
            alphaflag = True

        if item.isdigit():
            digitflag = True

        if item.islower():
            lowerflag = True

        if item.isupper():
            upperflag = True

    print(alnumflag)
    print(alphaflag)
    print(digitflag)
    print(lowerflag)
    print(upperflag)
