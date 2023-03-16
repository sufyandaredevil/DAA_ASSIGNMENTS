A = [[1, 0, 2, 1], [4, 1, 0, 0], [0, 1, 3, 0], [5, 0, 2, 1] ]

B = [[0, 1, 0, 1], [2, 1, 0, 4], [2, 0, 1, 1], [1, 3, 5, 0]]

result = [[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0] ]

# iterating by row of A
for i in range(len(A)):

    # iterating by column by B
    for j in range(len(B[0])):

        # iterating by rows of B
        for k in range(len(B)):
            result[i][j] += A[i][k] * B[k][j]

for r in result:
    print(r)
