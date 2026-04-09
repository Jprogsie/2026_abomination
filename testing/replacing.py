with open("foo", "r") as f:
    lines = f.readlines()
    old = input("old: ")
    new = input("new: ")

    for i,line in enumerate(lines):
        print(i+1, line)
        if old in line:
            lines[i] = line.replace(old, new)
            with open("foo", "w") as f:
                f.writelines(lines)
        
      