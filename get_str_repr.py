def readFile(path):
    with open(path, "rt") as f:
        return f.read()

def writeFile(path, contents):
    with open(path, "wt") as f:
        f.write(contents)

def repr_file(path):
    contents = readFile("%s.txt" % path)
    new_path = "src/bfs_%s.h" % path
    new_contents = "char big_fucking_string[] = %s;" % repr(contents).replace("'", '"')
    writeFile(new_path, new_contents);


repr_file("bvh_cow_3")
repr_file("bvh_cow_all")
repr_file("bvh_cow_100")
repr_file("bvh_maxplanck_100")
repr_file("bvh_peter_100")
repr_file("bvh_teapot_100")
