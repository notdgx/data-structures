# Graphs 

- Edges : the path lines 
- NOdes / Vertice : the actual node 
- anyone can connect to anything 
- even t hey can onnect back to self 
- trees are special type of graphs 
- repersentation and storage 
    - adjecent maticx
    - adjacednt list
- on based on the weight 
    - weighted 
    - unweighted
- on based on the direction 
    - directes o
    - undirected 

- the two node connected by a edge is callaed adjacent 
- form edge point of view the edge is insident ot A and B if undirected 
- and if directed then on the edge si incident to the B only if A-->B
- the number of the edges connected to a node is called the degree of the node 
- vertex with no connection is called as a isolated vertex 
- the vertex with only one degree or like only one edge connected is called as a leaf or pendednt vertex
- directied graphs are the graphs which has a direction of incident 
- in degre is how many incident edge is there on the node 
- out degree is how many edges are going out from the node to otheres in directed cases only 
- parth is the sequence of the vertices that you have to go through in order to reach from node A to node B
- path length is the edge count in case of the directed and undirected graphs 
- in case of the directed graph path cost is the sum of hte length of the edge bw the two nodes we have to go 
- a cycle is a path in which a we starting form a node A going along the path and return to same node after traversing A->B->C->D->E->A
- connected graph is a graph in which every node is connected wiht edges so that each of htem can be visited through some part
- disconnecte dgraph are the graphs which are note entirely connected they may be connected internally in ggorups bu not all nodes are connected so that all can be visisted through some path in connected nodes 
- walk is a travering in which the rtepeating a node is allowed 
- trail is traversing in whihc we dont visit a edge that is already visited 
- trail is traversing in whihc we dont visit a vertex that is already visited 
- parallel edges graph is that there can be individual seperate connections bw the A and B for parralled two are allowed like A->B and B<-A for multiple paths we have multipgraphs 


## adjacent matrix : 

- uses a 2d fixed sized matirc 
- both have the vertices as the row and columns
- rows are generally called as the vertices 
- columns are marked as the connection to 
- for the unviegted if no connection then placeholder is 0 other wise one 
- for the weighted the placeholder is the weight value , no two cannot have zero as the weight in like length senece if we ignore the negatives 
- the diagonal of matric is always 0 as no can have the connection to self it self loop not allwed
- it may waste a lot of storage for the large dataset as n*n connecion points placeholders for the n data 
- in undirected graph the matrix is symmetric because of commnon connection path bw A and B 
- 

## adjcent list : 

- it is a type of storage that uses the linked list for the graph stroage 
- it is storage efficient and use pointers and malloc 
- it is like a 2d array but for each row there is a label let name them head 
- if there are totla n edges then n rows with frist elements a label that sighifies it is for the vetex i 
- this can be expanadabel ie the no of vertex can increased or deleted 
- for the connection or the edge part the labels are attached with a new node on left progresively like a linked list form the ;able so that each connection will tell yeah this labele vertex is conencted to this node value ie that is a adress to tha another label in the row 
- the rows are colum produced here doesn thave any fiixed structure 

```
A → [B] → [C] → [D] → NULL
B → [A] → → NULL
C → [A] → [D] → NULL
D → [B] → NULL

```

- it is more sutaible if the matrix may be sparse or but it cna have dense 
- but t doesnt waste extra space like the adjacent matics for even a sparce matrics 
- this directly gives all the connected neighbour of A
- we can make a another fireld in struct of conencted nodes and add the weight there 
- for it being directed we only think to work with the out degree only the in degree is settled as other lables out degree
- 

| Operation | Typical complexity |
|---|---:|
| Create empty lists | O(V) |
| Add edge at front | O(1) |
| Check whether edge exists | O(deg(v)) |
| Traverse neighbors of v | O(deg(v)) |
| Find degree of v | O(deg(v)) |
| Traverse entire graph | O(V + E) |
| Space | O(V + E) |

## Traversing 

- BFS (Breadth-First Search): Visit nearby vertices first, level by level.
- we will check the connected nodes to me first and then move to the next node and then do the same and so ...
- it uses a queue system FIFO


- DFS (Depth-First Search): Follow one path as far as possible, then backtrack.
- pick a node and then go as deep as we can in to a path and move out back and then other part and so  on ... 
- 


