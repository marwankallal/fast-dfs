#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

/* STRUCTS */
typedef struct vertex{
    char *label;
    int value;
    unsigned short goal;
} g_vertex;

typedef struct edge{
    g_vertex vertices[2];
    unsigned int cost;
} g_edge;

typedef struct node{
    g_edge *edge;
    struct node *next;
} g_path_node;

typedef struct path_node{
    g_path_node *head;
    g_path_node *tail;
}g_path;

typedef struct graph{
    g_vertex *V;
    g_edge *E;
}g_graph;

/* DEFAULTS */
const g_vertex VERTEX_DEFAULT = { "", 0, 0};
const g_edge EDGE_DEFAULT = { {}, 1};
const g_path PATH_DEFAULT = { NULL, NULL };

/* PROTOTYPES */
/* User Functions */
g_path *search(g_graph graph, g_vertex start, unsigned short use_goal_f, int goal_value);

/* Utility Functions */
void add_to_path(g_path *path, g_edge *edge);
int is_goal(g_vertex vertex, int goal_val);
