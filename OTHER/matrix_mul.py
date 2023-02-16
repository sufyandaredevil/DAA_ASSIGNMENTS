A = [[2, 1, 3, 4],
     [4, 3, 1, 2],
     [1, 4, 2, 3],
     [3, 2, 4, 1]
     ]

# take a 3x4 matrix
B = [[5, 10, 2, 3],
     [3, 5, 2, 10],
     [1, 10, 5, 3],
     [2, 3, 5, 10]]

result = [[0, 0, 0, 0],
          [0, 0, 0, 0],
          [0, 0, 0, 0],
          [0, 0, 0, 0]
          ]

# iterating by row of A
for i in range(len(A)):

    # iterating by column by B
    for j in range(len(B[0])):

        # iterating by rows of B
        for k in range(len(B)):
            result[i][j] += A[i][k] * B[k][j]

for r in result:
    print(r)
