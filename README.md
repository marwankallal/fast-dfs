# fast-dfs
Fast multithreaded search library in C

Features
--------
- Multiple search algorithms
    + Multithreaded A* Search
    + Thread optimized DFS/BFS hybrid
    + Even more to come! Please feel free to suggest any other algorithms.
- Multithreaded to increase speed on multicore systems.
- Written with speed and memory optimization at the forefront.
- Can be compiled as library or standalone tool.

Data Input
----------
The data representation in this library is relatively formal, consisting of
the set V of vertices and the set E of edges. Each vertex can have both an
integer `value`, and an boolean `goal` parameter. Either can be used to determine
when the search has succeeded. 

Each edge has an integer `cost` and an array of two vertices in no particular order.
The cost will always default to 1 unless otherwise specified, and all searches will
be cost minimization. The array of vertices are in no particular order.


TODO (Cool Features)
--------------------
- Automatic algorithm suggestion based on graph structure (Experimental).
- Support for multidimensional graphs.
- Support for directed graphs.
