
from datetime import datetime 
import os

user = os.environ["USER"]


# When Linux starts a process (like your Python script), 
# the OS passes a bunch of environment variables to it. 
# These are just key-value pairs that the OS and shell 
# maintain, like:


# USER=apoorv
# HOME=/home/apoorv
# PATH=/usr/bin:/bin:...


# os.environ is just Python reading that block of data that 
# Linux already handed to the process. You can actually see 
# all of them by running this in your terminal:

# printenv, bash command


now = datetime.now()
# print(now.strftime("%I:%M %p"))
# print(now.minute)
# print(now.day)
# print(now.year)

if now.hour < 12:
    print(f"Morning {user}")
elif now.hour < 17:
    print(f"Afternoon {user}")
elif now.hour < 21:
    print(f"Evening {user}")
else:
    print(f"Night {user} ")