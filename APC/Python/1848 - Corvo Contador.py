i = 0
soma = 0

while i != 3:
    str = input()
    if str == "caw caw":
        print(soma)
        i = i + 1
        soma = 0
    else:
        if str[0] == '*':
            soma = soma + 4
        if str[1] == '*':
            soma = soma + 2
        if str[2] == '*':
            soma = soma + 1
