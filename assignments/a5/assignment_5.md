[<kbd>< ASSIGNMENTS</kbd>](../../README.md#assignments-qa)  
[<kbd>< As. 4</kbd>](../a4/assignment_4.md)

---

### QUESTIONS:

1. Find the **Maximum Flow** in the given **Flow Network** using **Ford Fulkerson** Algorithm:

```mermaid
graph LR;
S((S)) --8--> A((A));
S --3--> D((D));
A --9--> B((B));
D --7--> B;
D --4--> C((C));
B --2--> T((T));
C --5--> T;
```

2. Find the **Maximum Matching** for the given **Bipartite Graph**:
```mermaid
graph TD;
A((A)) ---- R((R));
A ---- M((M));
B((B)) ---- S((S));
C((C)) ---- N((N));
C ---- M;
D((D)) ---- T((T));
D ---- N;
D ---- W((W));
E((E)) ---- S;
E ---- M;
F((F)) ---- R;
F ---- T;
F ---- S;
```

3. Find the maximum value of $Z$ using **Simplex Method** where:

    $Z = 5 x_1 + 3 x_2$

    <ins>Subject to constraints:</ins>

    $x_1 + x_2 \leqslant 2$

    $5 x_1 + 2 x_2 \leqslant 10$

    $3 x_1 + 8 x_2 \leqslant 12$

    $with$ $x_1, x_2 \geqslant 0$ 


---
##### (ANSWERS WILL BE POSTED LATER)