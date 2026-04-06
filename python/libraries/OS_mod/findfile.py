import os 
files = os.listdir()
# spc_files = os.listdir(path=input("path: "))

file = input("What file do you wanna see?: ")

# print(files[0])

for f in files:
    
    if f == file:
        print("Found it!")
        break
else:
    print("Nope, not here")

