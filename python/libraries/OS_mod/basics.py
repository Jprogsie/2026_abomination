import os #super useful in hacking too



# print(os.getcwd())

# print(os.listdir("/home/apoorv"))
# print(os.listdir())

# result = os.listdir()
# print(type(result))

content = os.listdir()
info = os.stat(content[0])
print("Content: ", end="")
print(info)

# st_mode → file permissions
# st_ino → inode number (unique ID the filesystem uses to track the file)
# st_dev → which device/drive it's on
# st_nlink → number of hard links
# st_uid → user ID of the owner (1000 = your user)
# st_gid → group ID
# st_size → size in bytes (231 bytes)
# st_atime → last accessed time
# st_mtime → last modified time
# st_ctime → last changed time (permissions etc)

from datetime import datetime

print("Atime: ", end="")
print(datetime.fromtimestamp(info.st_atime))
print("Mtime: ", end="")
print(datetime.fromtimestamp(info.st_mtime))