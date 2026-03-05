def dfs(res, matrix, n, counter):
    for c in matrix[counter]:
        c = "X"
        if matrix_is_valid(matrix):
            if counter == n-1:
                res.append(matrix)
            else:
                dfs(matrix, n, counter + 1)
        c = "."

def matrix_is_valid(matrix) -> bool:
    hash_table = []
    for y in range(len(matrix)):
        for x in range(len(matrix)):
            if matrix[y][x] == "X":
                hash_table.append(tuple(x, y))
    if hash_table == []:
            return True
    for x1, y1 in hash_table:
        hash_table.pop(0)
        if hash_table == []:
            return True

        for x2, y2 in hash_table:
            if x1 == x2 or y1 == y2:
                return False
            d1 = calcolare_diagonali()
            d2 = calcolare_diagonali()
            if any(d1) == any(d2):
                return False
    return True

n = 4
res = [[[]]]
matrix = [["".join(".") for _ in range(n)] for _ in range(n)]
dfs(res, matrix, n, 0)
print(res)