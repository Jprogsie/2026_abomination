import os

print(os.path.exists("/home/apoorv"))
print(os.path.exists("/home/fakefolder"))

print(os.path.isfile("/home/apoorv/scripts/greeting.py"))
print(os.path.isdir("/home/apoorv"))
print(os.path.getsize("/home/apoorv/scripts/greeting.py"))
print(os.path.basename("/home/apoorv/scripts/greeting.py"))
print(os.path.dirname("/home/apoorv/scripts/greeting.py"))

content = os.listdir()
for file in content:
    if os.path.isfile(file):
        print(file)