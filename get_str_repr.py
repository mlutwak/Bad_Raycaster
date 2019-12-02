def readFile(path):
    with open(path, "rt") as f:
        return f.read()

def writeFile(path, contents):
    with open(path, "wt") as f:
        f.write(contents)

def repr_file(path):
    contents = readFile(path)
    new_path = "repr_%s" % path
    new_contents = repr(contents);
    writeFile(new_path, new_contents);

repr_file("bvh_cow_100.txt");