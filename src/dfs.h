#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

/* STRUCTS */
typedef struct vertex{
    char *label;
    int value;
    int goal;
} g_vertex;

typedef struct edge{
    g_vertex vertices[2];
    int cost;
} g_edge;

typedef struct node{
    g_edge *edge;
    struct node *next;
} g_path_node;

typedef struct path_node{
    g_path_node *head;
    g_path_node *tail;
}g_path;


/* DEFAULTS */
const g_vertex VERTEX_DEFAULT = { "", 0, 0};
const g_edge EDGE_DEFAULT = { {}, 1};
const g_path PATH_DEFAULT = { NULL, NULL };

/* PROTOTYPES */
/* User Functions */
g_path *search(int goal_value);
g_path *search();

/* Utility Functions */
void add_to_path(g_path *path, g_edge *edge);
int is_goal(g_vertex vertex, int goal_val);
