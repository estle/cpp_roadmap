def distance(x1, y1, x2, y2):
    return (x1 - x2) ** 2 + (y1 - y2) ** 2


def find(parent, node):
    if parent[node] == node:
        return node
    parent[node] = find(parent, parent[node])
    return parent[node]


def union(parent, rank, node1, node2):
    root1 = find(parent, node1)
    root2 = find(parent, node2)
    if rank[root1] < rank[root2]:
        parent[root1] = root2
        return False
    else:
        parent[root2] = root1
        if rank[root1] == rank[root2]:
            rank[root1] += 1
        return True


n, m = map(int, input().split())

computers = []
servers = []

for i in range(n):
    x, y = map(int, input().split())
    computers.append((x, y))

for i in range(m):
    x, y = map(int, input().split())
    servers.append((x, y))

edges = []

for i in range(m):
    for j in range(i + 1, m):
        d = distance(servers[i][0], servers[i][1],
                     servers[j][0], servers[j][1])
        edges.append((d, 's', i, 's', j))

for i in range(m):
    for j in range(n):
        d = distance(servers[i][0], servers[i][1],
                     computers[j][0], computers[j][1])
        edges.append((d, 's', i, 'c', j))


edges.sort()

parent = [i for i in range(m)]
rank = [0] * m

connected_servers = set()
connected_computers = set()
total_length = 0
result_serv = []
result_seco = []

for d, type1, node1, type2, node2 in edges:
    if type1 == 's' and type2 == 's':
        if find(parent, node1) != find(parent, node2):
            flag = union(parent, rank, node1, node2)
            connected_servers.add(node1)
            connected_servers.add(node2)
            total_length += d
            if flag:
                result_serv.append(('s', node2, 's', node1))
            else:
                result_serv.append(('s', node1, 's', node2))
    elif type1 == 's' and type2 == 'c' and node2 not in connected_computers:
            connected_computers.add(node2)
            total_length += d
            result_seco.append(('s', node1, 'c', node2))

result_seco.sort()
result_serv.sort()
result = len(result_seco) + len(result_serv)
print(result, total_length)
for connection in result_serv:
    print(
        f'{connection[0]} {connection[1]+1} -> {connection[2]} {connection[3]+1}')
for connection in result_seco:
    print(
        f'{connection[0]} {connection[1]+1} -> {connection[2]} {connection[3]+1}')