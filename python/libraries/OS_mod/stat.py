from datetime import datetime
import os

content = os.listdir()
info = os.stat(content[0])

choice = input("What do you wanna know? (press enter forev erything): ")

match choice:
    case "size": 
        print(info.st_size)
    case "atime":
        print(datetime.fromtimestamp(info.st_atime))
    case "mtime":
        print(datetime.fromtimestamp(info.st_mtime))
    case "":
        print(info)   
    case _:
        print("Invalid option, dummy!")
