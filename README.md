# Kruskal's Algorithm Implementation

## Overview

This C++ program demonstrates the implementation of Kruskal's algorithm for finding the minimum spanning tree (MST) of a connected, undirected graph. The algorithm is used to construct a tree that spans all the nodes of the graph with the minimum possible total edge weight.

## Features

- **Input:** The program takes input for the number of nodes and edges, as well as the details of each edge (nodes and cost) from the user.

- **Sorting:** Edges are sorted in ascending order based on their costs using the C++ `std::sort` function.

- **Union-Find Data Structure:** The program utilizes the union-find (disjoint set) data structure to efficiently detect and avoid cycles while building the MST.

- **Output:** The resulting minimum spanning tree is displayed, along with the total cost of the tree.

## How to Use

1. **Compile:** Compile the program using a C++ compiler. For example:
    ```bash
    g++ kruskal_algorithm.cpp -o kruskal_algorithm
    ```

2. **Run:** Execute the compiled program:
    ```bash
    ./kruskal_algorithm
    ```

3. **Input:** Follow the prompts to enter the number of nodes, number of edges, and details of each edge.

4. **Output:** The program will display the edges included in the minimum spanning tree and the total cost of the tree.

## Example

*Suppose you have the following input:*

Introdu numarul de noduri: 4
Introdu numarul de muchii: 5
Introdu muchia 1 (x, y, cost): 1 2 2
Introdu muchia 2 (x, y, cost): 1 3 3
Introdu muchia 3 (x, y, cost): 2 3 1
Introdu muchia 4 (x, y, cost): 2 4 4
Introdu muchia 5 (x, y, cost): 3 4 5

*The program might output:*

1, 2 cu costul 2
2, 3 cu costul 1
1, 3 cu costul 3
2, 4 cu costul 4
Costul total al Arborelui este: 10


## License

This program is open-source and available under the [MIT License](LICENSE).

Feel free to modify and use the code according to your needs.


