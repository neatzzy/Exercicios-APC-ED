p1 = input().split()
p2 = input().split()

cod1, num1, val1 = p1
cod2, num2, val2 = p2

total = (int(num1) * float(val1)) + (int(num2) * float(val2))

print(f"VALOR A PAGAR: R$ {total:.2f}")