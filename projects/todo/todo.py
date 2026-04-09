#!/usr/bin/env python3
import sys

actions = ["new", "add", "del", "help", "view", "tick", ]

command = sys.argv[0]
action = sys.argv[1]
prompt = sys.argv[2] if len(sys.argv) > 2 else None
# prompt2 = sys.argv[3] if len(sys.argv) > 3 else None


# print(f"{command} {action} {prompt}")

path = f"./2026-04/{prompt}.txt"


if action == "new":
    with open(path, "a"):
        print("So far so good ✅")

elif action == "add":
    with open(path, "a")as f:
        task = input("Task: ")
        f.write(f"[] {task}\n")

elif action == "help" :
    print("""
Usage: todo <action> <prompt>

Actions:
  new  <date>  - Create a new todo file for that date
  add  <date>  - Add a task to that date's file
  tick <date>  - Mark a task as done
  view <date>  - View the tasks. Duh!
  help         - to help with the tool
""")
    
if action == "view":
    with open(path, "r") as f:
        print(f.read())

if action == "tick":
    with open(path, "r") as f:
        task = f.readlines()
        