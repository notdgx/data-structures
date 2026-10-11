
# Graphs — Flaw Check and Complete Revision Notes

Your notes already cover most of the important graph concepts. The main problems are a few mix-ups between graph terminology, incorrect assumptions about storage, and a couple of errors in your adjacency-list example.

The most important corrections are:

1. Path length normally means the number of edges, even in a directed graph. The sum of edge weights is the path weight or path cost.
2. A trail can repeat vertices, but it cannot repeat edges. A path normally cannot repeat vertices.
3. A directed edge \\(A \to B\\) goes out of A and into B. Both vertices are endpoints of the edge; B is not the only incident vertex.
4. An adjacency matrix has \\(V \times V\\) entries, not \\(2^V\\).
5. An adjacency matrix's diagonal is not always zero; that depends on whether self-loops are permitted and on what the matrix represents.
6. An adjacency list has one list per vertex, not one row per edge. Each list entry describes an adjacent vertex (and optionally its edge weight).
7. An adjacency list does not automatically calculate incoming degree. It stores outgoing neighbours for a typical directed-graph implementation.
8. Your undirected adjacency-list example is inconsistent: an undirected edge must appear in both endpoints' lists.
9. \\(A \to B\\) and \\(B \to A\\) are opposite-direction edges, not parallel edges. Parallel directed edges have the same direction and endpoints.
10. BFS and DFS need a visited record to avoid repeatedly traversing vertices, especially when cycles exist.

Let's build the correct mental model first, then put everything into final revision notes.

## 1. The big picture: What is a graph?

A graph is a data structure that represents relationships between objects.

- Vertex (node): An object or point.
- Edge: A connection or relationship between vertices.
- Graph: The collection of vertices and edges.

For example, in a social network, people can be vertices and friendships can be edges. In a road network, locations can be vertices and roads can be edges.

A graph is commonly written as:

\\[ G=(V,E) \\]

where:

- \\(V\\) = set of vertices.
- \\(E\\) = set of edges.

Suppose:

\\[ V=\\{A,B,C,D\\} \\]

\\[ E=\\{(A,B),(A,C),(B,D),(C,D)\\} \\]

This represents four vertices and four connections.

The same graph, pictured conceptually

Edges: A–B, A–C, B–D, and C–D.

### How is a graph different from a tree?

A tree is a special kind of graph.

In the standard definition used in data structures, a tree is an undirected graph that is:

- Connected: every vertex can reach every other vertex.
- Acyclic: it contains no cycles.

A tree with \\(V\\) vertices has exactly \\(V-1\\) edges.

A general graph does not have to be connected or acyclic, and it may have more than \\(V-1\\) edges.

### Can any vertex connect to any other vertex?

A graph can define an edge between any pair of vertices, provided that edge is allowed by the graph's rules. But not every pair has to be connected.

There are also different rules for different graph types:

- A simple graph does not have self-loops or parallel edges.
- Some graph types allow a vertex to connect to itself; this is a self-loop.
- Some graph types allow multiple distinct edges between the same pair of vertices; these are parallel edges.

Therefore, self-connections and repeated connections are not properties of every graph.

## 2. Exact flaws in your original notes

| Your original idea                                                                         | Correction                                                                                                                          | Why it matters                                                                 |
| ------------------------------------------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------ |
| “Anyone can connect to anything.”                                                          | Any permitted pair of vertices can have an edge, but an edge exists only when it is included in the graph.                          | Not every pair is necessarily adjacent.                                        |
| An edge in \\(A \to B\\) is incident only to B.                                            | A and B are both endpoints. A is the source/tail; B is the destination/head.                                                        | Incidence and direction are different concepts.                                |
| A path's length in a directed graph is the sum of edge lengths.                            | Path length is normally the number of edges. Sum of weights is the path's weight/cost.                                              | Direction determines which way you may travel, not how path length is defined. |
| A trail cannot repeat vertices.                                                            | A trail cannot repeat edges, but it may repeat vertices.                                                                            | You confused a trail with a path.                                              |
| The adjacency-matrix diagonal is always zero.                                              | It is zero for a loop-free, unweighted adjacency matrix under the usual convention. Self-loops can make diagonal entries nonzero.   | The diagonal represents self-connections in an adjacency matrix.               |
| A graph with \\(V\\) vertices requires \\(2^V\\) matrix cells.                             | A square adjacency matrix uses \\(V^2\\) cells.                                                                                     | The matrix has \\(V\\) rows and \\(V\\) columns.                               |
| An adjacency list uses a linked list for every connection, with an address to another row. | Each vertex has a list of its neighbours. An entry may store a vertex ID/index or a pointer/reference, depending on implementation. | A neighbour value is not necessarily a memory address.                         |
| Each additional vertex is automatically expandable in an adjacency list.                   | Expansion depends on implementation. A dynamic list can grow, but an array of list heads may need resizing.                         | Dynamic storage is an implementation choice, not an inherent guarantee.        |
| In a directed graph, only out-degree needs consideration.                                  | Both in-degree and out-degree are meaningful.                                                                                       | They answer different questions: incoming versus outgoing edges.               |
| \\(A \to B\\) and \\(B \to A\\) are parallel edges.                                        | They are opposite-direction arcs. Parallel directed edges share the same direction and endpoints.                                   | Direction matters when determining whether edges are parallel.                 |
| The example adjacency list represents an undirected graph.                                 | The listed connections are not symmetric, so it does not consistently represent an undirected graph.                                | If A lists B as a neighbour, B must also list A.                               |

Two other details are worth keeping in mind:

- Weighted does not automatically mean distance or length. A weight can represent distance, time, cost, capacity, or some other value. It may be negative in some applications, depending on the graph and algorithm.
- A leaf or pendant vertex normally has degree 1 in an undirected graph. For directed graphs, source and sink are often more useful terms, and their definitions depend on incoming/outgoing degree.

## 3. Final notes: Graph terminology

### 3.1 Basic concepts

- Adjacent vertices: Two vertices directly connected by an edge.
- Incident edge: An edge associated with one of its endpoint vertices.
- Degree: The number of edges incident to a vertex in an undirected graph.
- Isolated vertex: A vertex with degree 0.
- Pendant vertex / leaf: A vertex with degree 1 in an undirected graph.
- Self-loop: An edge that connects a vertex to itself.
- Parallel edges: Distinct edges joining the same pair of endpoints.
- Multigraph: A graph structure that permits parallel edges; the exact treatment of loops depends on the definition being used.

### 3.2 Directed versus undirected graphs

Undirected graph

- An edge has no direction.
- If A is connected to B, the connection can be traversed both ways.
- The edge is written \\(A-B\\) or \\(\\{A,B\\}\\).

Directed graph (digraph)

- Each edge has a direction.
- An edge \\(A \to B\\) permits movement from A to B along that edge.
- It does not automatically permit movement from B to A.
- The edge is often called a directed edge or arc.

| Property           | Undirected graph   | Directed graph                        |
| ------------------ | ------------------ | ------------------------------------- |
| Edge               | A–B                | A → B                                 |
| Travel direction   | Both ways          | Only along the arrow                  |
| Degree terminology | Degree             | In-degree and out-degree              |
| Adjacency matrix   | Usually symmetric  | Not necessarily symmetric             |
| Adjacency list     | List of neighbours | Typically list of outgoing neighbours |

Important: Direction and weight are independent classifications. A graph can be directed and weighted, undirected and weighted, directed and unweighted, or undirected and unweighted.

### 3.3 Degree, in-degree, and out-degree

For an undirected graph:

\\[ \deg(v)=\text{number of edges incident to }v \\]

For a directed graph:

\\[ \deg^-(v)=\text{in-degree} \\]

\\[ \deg^+(v)=\text{out-degree} \\]

- In-degree: Number of directed edges coming into the vertex.
- Out-degree: Number of directed edges going out of the vertex.
- Total degree: In-degree plus out-degree, under the usual convention.

Example:

```
A → B → C
↑       |
└───────┘
```

The edges are \\(A \to B\\), \\(B \to C\\), and \\(C \to A\\).

| Vertex | In-degree | Out-degree | Total degree |
| ------ | --------- | ---------- | ------------ |
| A      | 1         | 1          | 2            |
| B      | 1         | 1          | 2            |
| C      | 1         | 1          | 2            |

This is a directed cycle. Every vertex has one incoming and one outgoing edge.

Gotchas

- In an undirected graph, each ordinary edge contributes 1 to the degree of each endpoint.
- A self-loop contributes 2 to the degree of its vertex under the standard undirected-graph convention.
- In a directed graph, a self-loop contributes 1 to in-degree and 1 to out-degree.
- In a directed graph, a vertex with in-degree 0 and out-degree greater than 0 is called a source; one with out-degree 0 and in-degree greater than 0 is called a sink. A vertex with both degrees 0 is isolated.

### 3.4 Walk, trail, path, and cycle

These terms are easy to confuse, so remember what each one forbids.

| Term               | Can repeat vertices?                                                                        | Can repeat edges? |
| ------------------ | ------------------------------------------------------------------------------------------- | ----------------- |
| Walk               | Yes                                                                                         | Yes               |
| Trail              | Yes                                                                                         | No                |
| Path (simple path) | No                                                                                          | No                |
| Cycle              | Returns to its starting vertex; internal vertices and edges do not repeat in a simple cycle | No                |

A walk is a sequence of vertices and edges where each edge connects consecutive vertices. Repetition is allowed.

A trail is a walk in which no edge is used more than once. A vertex can appear more than once.

A path, under the common simple-path convention, does not repeat vertices. Consequently, it does not repeat edges either.

A cycle is a closed route that starts and ends at the same vertex. For a directed cycle, the arrows must consistently permit travel around the cycle.

For example:

```
A — B
|   |
D — C
```

- `A → B → C` is a path.
- `A → B → C → D → A` is a cycle.
- `A → B → C → B` is a walk that repeats the edge B–C, so it is not a trail.

In an undirected graph, the arrows in these examples simply mean “traverse the edge”; they are not directions on the edges.

### 3.5 Path length versus path weight

This is an important correction to your notes.

Path length is ordinarily the number of edges in the path.

Path weight / cost is the sum of the weights of those edges.

Suppose:

```
A ──5── B ──2── C
```

The path from A to C has:

- Path length = 2 edges.
- Path weight = \\(5+2=7\\).

This distinction applies to both directed and undirected graphs. A directed graph simply restricts which paths are allowed by the edge directions.

### 3.6 Connected and disconnected graphs

Connected graph: In an undirected graph, every vertex can reach every other vertex through some path.

Disconnected graph: At least one pair of vertices has no path between them.

A disconnected graph may contain multiple connected components: maximal groups of vertices that are internally connected but have no connections to the other groups.

```
A — B — C      D — E      F
```

This graph has three connected components:

- `{A, B, C}`
- `{D, E}`
- `{F}` — an isolated vertex

A subtle point: for directed graphs, ordinary “connected” terminology can be ambiguous. Strongly connected means each vertex can reach every other vertex by following the arrows. Weakly connected means the graph becomes connected when the directions are ignored.

## 4. Graph representation and storage

A graph is the logical structure. Graph representation is how we store that structure in memory.

The two common representations are:

1. Adjacency matrix
2. Adjacency list

Both store the same graph, but they have different memory requirements and operation costs.

## 5. Adjacency matrix

An adjacency matrix represents a graph using a two-dimensional \\(V \times V\\) matrix.

- Every row represents a vertex.
- Every column represents a vertex.
- The cell `M[i][j]` tells us whether an edge exists from vertex `i` to vertex `j`, or stores the edge's weight.
- A graph with \\(V\\) vertices has \\(V^2\\) matrix cells.

### 5.1 Example: Unweighted, undirected graph

Consider the graph with edges A–B, A–C, B–D, and C–D.

```
     A  B  C  D
A [  0  1  1  0 ]
B [  1  0  0  1 ]
C [  1  0  0  1 ]
D [  0  1  1  0 ]
```

The values mean:

- `M[A][B] = 1`: A and B are connected.
- `M[A][D] = 0`: A and D are not directly connected.
- `M[B][D] = 1`: B and D are connected.

The zero in `M[A][D]` does not mean there is no path from A to D. A can reach D through other vertices, such as A → B → D. The matrix represents direct edges, not every possible path.

### 5.2 Unweighted and weighted matrices

Unweighted graph: A common convention is:

- `1` = an edge exists.
- `0` = no edge exists.

Weighted graph: The cell stores the weight of the corresponding edge.

For example:

```
       A   B   C
A [    0   5   0 ]
B [    5   0   2 ]
C [    0   2   0 ]
```

This represents an undirected weighted graph with edge A–B of weight 5 and edge B–C of weight 2.

The exact value used for “no edge” is an implementation choice. Zero works when zero-weight edges are not possible. If zero-weight edges are possible, a different marker such as `None` or infinity may be necessary.

### 5.3 Why is an undirected adjacency matrix symmetric?

In an undirected graph, A–B and B–A describe the same connection.

Therefore:

\\[ M[i][j]=M[j][i] \\]

For a weighted undirected graph, the same edge weight appears in both positions.

A directed matrix does not generally have this symmetry because `A → B` does not imply `B → A`.

### 5.4 Is the diagonal always zero?

No.

The diagonal contains entries such as `M[A][A]`.

- In a loop-free, unweighted adjacency matrix, the diagonal is normally zero.
- If self-loops are permitted, a diagonal entry can represent a self-loop.
- In a weighted adjacency matrix, its diagonal depends on the conventions used.
- In a shortest-distance matrix, the diagonal is usually zero because the shortest distance from a vertex to itself is zero. That is a different concept from an adjacency matrix.

### 5.5 Advantages, limitations, and complexity

Advantages:

- Simple to understand and implement.
- Checking whether a specific edge exists takes \\(O(1)\\) time.
- Adding or removing an edge takes \\(O(1)\\) time.
- Works well for dense graphs, where many possible edges actually exist.

Limitations:

- It always allocates \\(V^2\\) cells, even if very few edges exist.
- Finding all neighbours of one vertex takes \\(O(V)\\) time.
- It can waste considerable memory when the graph is sparse.

Space complexity:

\\[ \boxed{O(V^2)} \\]

The number of possible non-loop edges is \\(V(V-1)/2\\) for a simple undirected graph and \\(V(V-1)\\) for a simple directed graph. The matrix still has \\(V^2\\) cells in either case.

## 6. Adjacency list

An adjacency list stores the neighbours of each vertex separately.

The key idea is:

> Instead of reserving a cell for every possible vertex-to-vertex connection, store the connections that actually exist.

For a common C implementation, we can maintain an array of \\(V\\) list heads, where each head points to the first node of that vertex's linked list.

- One list head per vertex.
- Each list node stores a neighbouring vertex.
- A node can also store the edge weight.
- A pointer connects one list node to the next.

### 6.1 Correct undirected adjacency-list example

Using the graph from the adjacency-matrix example:

```
A → [B] → [C] → NULL
B → [A] → [D] → NULL
C → [A] → [D] → NULL
D → [B] → [C] → NULL
```

The graph's edges are A–B, A–C, B–D, and C–D.

Notice that:

- A's list includes B, so B's list must include A.
- A's list includes C, so C's list must include A.
- B's list includes D, so D's list must include B.
- C's list includes D, so D's list must include C.

This is the symmetry required by an undirected graph.

### 6.2 What exactly does a linked-list node store?

A typical node for an unweighted graph might look like this in C:

```
struct AdjNode {
    int dest;                 // ID/index of neighbouring vertex
    struct AdjNode *next;     // Next node in this list
};
```

For a weighted graph, add a weight field:

```
struct AdjNode {
    int dest;                 // Neighbour's vertex ID/index
    int weight;               // Weight of the edge
    struct AdjNode *next;
};
```

And the graph can store one head pointer per vertex:

```
struct Graph {
    int V;
    struct AdjNode **head;
};
```

Conceptually:

```
head[A] ──→ [dest=B | next] ──→ [dest=C | next] ──→ NULL
head[B] ──→ [dest=A | next] ──→ [dest=D | next] ──→ NULL
```

The `dest` field usually holds a vertex ID or index, not a pointer to the first node of another vertex's list. A different implementation can store a pointer or reference to a vertex object instead.

### 6.3 How are edges stored?

Undirected graph: Each edge is normally represented twice in the adjacency lists.

For edge A–B:

```
A's list contains B
B's list contains A
```

Directed graph: Each edge is normally represented in the source vertex's list only.

For edge A → B:

```
A's list contains B
B's list does not need to contain A
```

B could contain A only if a separate edge B → A also exists.

Weighted graph: Store both the neighbour and the associated weight:

```
A → [B, weight=5] → [C, weight=3] → NULL
```

### 6.4 Is it automatically expandable?

Not automatically.

A linked list can grow as connections are added. However, if we use a fixed-size array of \\(V\\) head pointers, adding more vertices may require resizing that array or allocating a new one.

Deleting a vertex also requires updating the lists that refer to it.

So an adjacency-list implementation is generally convenient for dynamic graphs, but its exact behaviour depends on its design.

### 6.5 In-degree and out-degree in an adjacency list

For a standard directed adjacency list:

- The length of vertex A's list gives A's out-degree, assuming every outgoing edge has its own list entry.
- The in-degree of A is the number of entries for A across all the other lists.

For example:

```
A → B, C
B → C
C → A
```

The edges are A → B, A → C, B → C, and C → A.

| Vertex | Out-degree | In-degree |
| ------ | ---------- | --------- |
| A      | 2          | 1         |
| B      | 0          | 1         |
| C      | 1          | 2         |

To obtain in-degree, we can scan the lists and count incoming edges. Alternatively, we can maintain in-degree counters or a reverse adjacency list.

## 7. Adjacency matrix vs adjacency list

| Property                            | Adjacency matrix                     | Adjacency list                               |
| ----------------------------------- | ------------------------------------ | -------------------------------------------- |
| Basic structure                     | 2D \\(V \times V\\) matrix           | One neighbour list per vertex                |
| Space                               | \\(O(V^2)\\)                         | \\(O(V+E)\\)                                 |
| Check a specific edge               | \\(O(1)\\)                           | \\(O(\deg(v))\\) to search the relevant list |
| Add an edge                         | \\(O(1)\\)                           | \\(O(1)\\) with insertion at the front       |
| Remove an edge                      | \\(O(1)\\)                           | Usually requires searching for the entry     |
| Traverse all neighbours of a vertex | \\(O(V)\\)                           | \\(O(\deg(v))\\)                             |
| Best suited to                      | Dense graphs or frequent edge checks | Sparse graphs and neighbour traversal        |

Here, \\(V\\) is the number of vertices, \\(E\\) is the number of edges, and \\(\deg(v)\\) denotes the relevant number of neighbours/edges for the operation. For directed adjacency lists, neighbour count usually means out-degree.

For adjacency lists:

| Operation                                 | Typical complexity            |
| ----------------------------------------- | ----------------------------- |
| Create empty lists                        | \\(O(V)\\)                    |
| Add edge at front                         | \\(O(1)\\) per list insertion |
| Check whether an edge exists              | \\(O(\deg(v))\\)              |
| Traverse neighbours of a vertex           | \\(O(\deg(v))\\)              |
| Calculate degree by counting list entries | \\(O(\deg(v))\\)              |
| Traverse the entire graph                 | \\(O(V+E)\\)                  |
| Space                                     | \\(O(V+E)\\)                  |

For an undirected graph, an ordinary edge generally generates two adjacency-list entries. This is still \\(O(V+E)\\) space.

Gotcha: If parallel edges are allowed, the implementation must preserve separate entries when each edge matters. Removing duplicates from the lists would lose that information.

## 8. Graph traversal: BFS and DFS

Traversal means systematically visiting vertices while following graph edges.

Before comparing the algorithms, remember two things:

- A graph may contain cycles, so we need a `visited` record to avoid endless revisiting.
- Starting from one vertex only reaches the vertices accessible from that starting vertex. In a disconnected graph, traversing the entire graph may require starting again from another unvisited vertex.

### 8.1 BFS — Breadth-First Search

BFS visits nearby vertices first, level by level.

It uses a queue, which follows FIFO: First In, First Out.

Imagine starting at A:

1. Mark A as visited and place A in the queue.
2. Remove A from the front of the queue.
3. Visit its unvisited neighbours and add them to the back of the queue.
4. Continue until the queue is empty.

For an unweighted graph, BFS also finds shortest paths measured by the number of edges from the starting vertex.

Example:

```
       A
      / \
     B   C
    / \   \
   D   E   F
```

Starting from A, one possible BFS order is:

```
A → B → C → D → E → F
```

The levels are:

```
Level 0: A
Level 1: B, C
Level 2: D, E, F
```

The exact order within a level depends on the order in which the neighbours are processed.

Uses of BFS

- Shortest paths in unweighted graphs.
- Finding connected components in undirected graphs.
- Finding vertices within a given number of edges.
- Level-order-style exploration of graph structures.

### 8.2 DFS — Depth-First Search

DFS follows one branch as deeply as possible, then backtracks.

It can be implemented using recursion or an explicit stack.

Steps:

1. Start at a vertex and mark it visited.
2. Choose an unvisited neighbour and visit it.
3. Continue deeper while an unvisited neighbour exists.
4. When no such neighbour exists, backtrack.
5. Continue until the relevant vertices have been explored.

Using the same graph, one possible DFS order is:

```
A → B → D → E → C → F
```

This is only one possible order. DFS results depend on neighbour ordering and implementation.

Uses of DFS

- Detecting cycles.
- Finding connected components.
- Topological sorting of directed acyclic graphs (DAGs).
- Exploring reachable vertices.
- Backtracking-based graph problems.

### 8.3 BFS vs DFS

| Property                             | BFS                               | DFS                                  |
| ------------------------------------ | --------------------------------- | ------------------------------------ |
| Main idea                            | Explore level by level            | Explore deeply, then backtrack       |
| Main data structure                  | Queue                             | Stack or recursion                   |
| Shortest path in an unweighted graph | Yes, by edge count                | Not guaranteed                       |
| Uses a visited record                | Yes                               | Yes                                  |
| Typical adjacency-list complexity    | \\(O(V+E)\\)                      | \\(O(V+E)\\)                         |
| Common applications                  | Unweighted shortest paths, levels | Cycle detection, topological sorting |

Both algorithms can be used on directed or undirected graphs, but the traversal follows the graph's permitted edge directions.

Gotcha: BFS does not generally find the minimum-cost path in a weighted graph. For weighted shortest paths, an appropriate algorithm—such as Dijkstra's algorithm when edge weights are nonnegative—is needed.

DFS is not inherently slower than BFS. With adjacency lists, both take \\(O(V+E)\\) time to traverse the reachable graph, assuming standard implementations.

## 9. Final quick-revision checklist

- Graph: Vertices and edges representing relationships.
- Vertex: A node/object.
- Edge: A connection between vertices.
- Adjacent: Directly connected.
- Incident: An edge and one of its endpoints.
- Degree: Number of incident edges in an undirected graph.
- In-degree: Incoming directed edges.
- Out-degree: Outgoing directed edges.
- Isolated vertex: Degree 0, or both in-degree and out-degree 0 for a digraph.
- Leaf / pendant vertex: Degree 1 in an undirected graph.
- Walk: Vertices and edges may repeat.
- Trail: Edges cannot repeat; vertices can.
- Path: Vertices do not repeat under the simple-path convention.
- Cycle: A closed route returning to its starting vertex.
- Path length: Number of edges.
- Path weight: Sum of edge weights.
- Connected graph: Every pair of vertices has a path between them in an undirected graph.
- Disconnected graph: At least two connected components.
- Adjacency matrix: \\(V \times V\\), space \\(O(V^2)\\).
- Adjacency list: Neighbour lists, space \\(O(V+E)\\).
- Undirected adjacency list: Normally stores each edge at both endpoints.
- Directed adjacency list: Normally stores each edge in the source vertex's list.
- BFS: Queue, level-by-level, shortest paths by edge count in unweighted graphs.
- DFS: Stack or recursion, depth-first exploration and backtracking.
- Tree: Connected, acyclic, undirected graph; a tree with \\(V\\) vertices has \\(V-1\\) edges.

