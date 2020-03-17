d = { }
l = ['1', '2', '3', '4', '5', '6', '7', '8', '9']

def formulate2d(l):
    for i in l:
        for j in filter(lambda x: x != i, l):
            yield int(i + j)

def formulate3d(l):
    for i in l:
        for j in filter(lambda x: x != i, l):
            for k in filter(lambda x: x != i and x != j, l):
                yield int(i + j + k)

for n1 in map(lambda x: int(x), l):
    for n2 in formulate2d(list(filter(lambda x: x != str(n1), l))):
        for n3 in formulate3d(list(filter(lambda x: x != str(n1) and x not in list(str(n2)), l))):
            if (n1 * n2 == n3):
                if n3 not in d:
                    d[n3] = [[n1, n2]]
                
                else:
                    d[n3].append([n1, n2])

for k in d:
    v = d[k]
    if len(v) > 1:
        print("{x1} * {x2} = {z} = {y2} * {y1}".format(z = k, x1 = v[0][0], x2 = v[0][1], y1 = v[1][0], y2 = v[1][1]))


