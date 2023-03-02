[<kbd>< ASSIGNMENTS</kbd>](../../README.md#assignments-qa)  
[<kbd>< As. 3</kbd>](../a3/assignment_3.md)
<!-- [<kbd> As. 5 ></kbd>](../a5/assignment_5.md) -->

---

### QUESTIONS:
1. Explain **Hamiltonian Circuit Problem** and find the Hamiltonian circuit using **Backtracking** approach.
    > ```mermaid
    > graph LR;
    > 1((1)) --- 3((3));
    > 2((2)) --- 1;
    > 2 --- 3;
    > 2 --- 5((5));
    > 3 --- 7((7));
    > 4((4)) --- 3;
    > 5 --- 6((6));
    > 6 --- 1;
    > 6 --- 7((7));
    > 7 --- 8((8));
    > 8 --- 4;
    > ```

2. Explain the **Travelling Salesman Problem** and find the shortest possible route for the given distance matrix using:  (i) **Greedy Approach** &  (ii) **Branch and Bound** 

    >$$ 
    >\begin{bmatrix}
    >& A & B & C & D & E \\
    >A & \infty & 20 & 30 & 10 & 11 \\
    >B & 15 & \infty & 16 & 4 & 2 \\
    >C & 3 & 5 & \infty & 2 & 4 \\
    >D & 19 & 6 & 18 & \infty & 3 \\
    >E & 16 & 4 & 7 & 16 & \infty \\
    >\end{bmatrix}
    >$$


4. Explain the **Assignment Problem** and find the minimum cost of assigning 4 different jobs to 4 people for the given cost matrix using **Branch and Bound** Technique:

    >$$ 
    >\begin{bmatrix}
    >& J_1 & J_2 & J_3 & J_4 \\
    >P_1 & 11 & 4 & 9 & 10 \\
    >P_2 & 8 & 6 & 5 & 9 \\
    >P_3 & 7 & 10 & 3 & 10 \\
    >P_4 & 9 & 8 & 11 & 6 \\
    >\end{bmatrix}
    >$$

---
##### (ANSWERS WILL BE POSTED LATER)