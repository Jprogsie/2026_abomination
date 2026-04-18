def power(a,b):
    p = 1
    i = 1
    for _ in range(b):
        p *= a 

    return p

print(f"2**3 {power(2,3)}")