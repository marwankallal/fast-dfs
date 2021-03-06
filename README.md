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
when the search has succeeded. Both `value` and `goal` will default to 0. `label`
can be used to identify nodes.

Each edge has an integer `cost` and an array of two vertices in no particular order.
The cost will always default to 1 unless otherwise specified, and all searches will
be cost minimization. The array of vertices are in no particular order.

When the search completes, it will return a `path`. This is a linked list of edges
that were traversed in order to reach the goal vertex. If no goal vertex was found,
the linked list will be empty (`NULL`).

In order to pass a graph to the search functions, use the `graph` struct, consisting
of the set E and V of your graph. You must also specify the start and goal values
for which you want the path between.

How To Run
----------
`fast-dfs` should be used as a library, where you pass in the graph structure. The 
`main` function exists only for testing.

To start a search, you will want to call:
`search(g_graph graph, g_vertex start, unsigned short use_goal_f, int goal_value)`

`search` returns a `g_path * `
The function parameters are defined below:

`graph`: Your input graph, made up of `g_vertex * V`and `g_edge * E`,
         arrays of vertices and edges that make up your graph

`start`: Vertex to start the search from.

`use_goal_f`: Set to `0` to specify goal value in the `goal_value` parameter, `1` otherwise.

`goal_value`: If non-zero, overrides `use_goal_f`. Specifies value of goal vertex.

TODO (Cool Features)
--------------------
- Automatic algorithm suggestion based on graph structure (Experimental).
- Support for multidimensional graphs.
- Support for directed graphs.
