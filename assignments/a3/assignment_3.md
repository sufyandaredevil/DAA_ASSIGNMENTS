[<kbd>< ASSIGNMENTS</kbd>](../../README.md#assignments-qa)  
[<kbd>< As. 2</kbd>](../a2/assignment_2.md)
[<kbd> As. 4 ></kbd>](../a4/assignment_4.md)

---

1. (a) Explain:  
    - **Floyd's**  
    - **Warshall's**  &
    - **Dijikstra's**  Algorithm

    (b) Also apply each algorithm for the given graph:

    >```mermaid
    >flowchart LR
    >A((1)) --6--> C((3))
    >A --6--> B((2))
    >B --2--> C((3))
    >B --10--> D((4))
    >C --3--> B
    >C --12--> D
    >D --1--> A
    >D --6--> A
    >```

    <details>
    <summary style="font-weight: bold;">Solution:</summary>

    1.(a)  
    - **Floyd's Algorithm:**  
    ![](./a3_1.png)

    - **Warshall's Algorithm:**  
    ![](./a3_2.png)

    - **Dijkstra's Algorithm:**  
    ![](./a3_3.png)

    1.(b)  
    - using **Floyd's:**  

    $$
    d_{ij}^{(k)} = \begin{cases}
    w_{ij}, &\text{if } k = 0 \\
    \min \left(d_{ij}^{(k-1)}, d_{ik}^{(k-1)} + d_{kj}^{(k-1)} \right), &\text{if } k \geq 1
    \end{cases}
    $$

    $$
    A = \begin{bmatrix} 2 & 1 & 3 & 4 \\
        4 & 3 & 1 & 2 \\
        1 & 4 & 2 & 3 \\
        3 & 2 & 4 & 1
        \end{bmatrix}
    $$


    </details>

---

2. (a) Explain **Optimal Binary Search Tree**  
   (b) Apply the OBST Algorithm for the given keys:
    >|Key|A|B|C|D|
    >|:-:|:-:|:-:|:-:|:-:|
    >|**P(K)**|0.1|0.2|0.4|0.3|

---
