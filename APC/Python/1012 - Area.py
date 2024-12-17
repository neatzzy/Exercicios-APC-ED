a,b,c = list(map(float,input().split()))

tri = (a * c) / 2
cir = 3.14159 * (c**2)
tra = ((a + b) * c) / 2
qua = b * b
ret = a * b

print(f"TRIANGULO: {tri:.3f}")
print(f"CIRCULO: {cir:.3f}")
print(f"TRAPEZIO: {tra:.3f}")
print(f"QUADRADO: {qua:.3f}")
print(f"RETANGULO: {ret:.3f}")
