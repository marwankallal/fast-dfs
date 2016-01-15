#include "dfs.h"

#define THREAD_MAX 4

/* PUBLIC INTERFACE */

/* pass use_goal_f as 1 if you set the goal flag in a vertex, otherwise set to 0
   Subsequently specifying a nonzero value for goal_value will override this flag */
g_path *search(g_graph graph, g_vertex start, unsigned short use_goal_f, int goal_value){
   return NULL; 
}


/* UTILITY FUNCTIONS */

void add_to_path(g_path *path, g_edge *edge){
    g_path_node *new_node = (g_path_node *)malloc(sizeof(g_path_node));
    (path->tail)->next = new_node;
    return;
}

int is_goal(g_vertex vertex, int goal_val){
    if(vertex.goal != 0 || vertex.value == goal_val){
        return 1;
    }
    return 0;
}


/* TESTING FUNTIONS */

/* main should be used only if specified by make, otherwise it should compile as a library */
#ifndef LIBRARY
/* main to be used exclusively for tests */
int main(int argc, char **argv){
    
    //TEST 1
    /* S = start, G = goal
         A
        / \
       S   G
        \ /
         B
    */
    g_vertex start = VERTEX_DEFAULT;
    g_vertex goal = {"", 0, 1};
    g_vertex A = VERTEX_DEFAULT;
    g_vertex B = VERTEX_DEFAULT;

    g_edge SA = {{start, A}, 0};
    g_edge AG = {{A, goal}, 0};
    g_edge SB = {{start, B}, 1};
    g_edge BG = {{B, goal}, 1};
    
    g_edge edges[4] = {SA, AG, SB, BG};
    g_vertex vertices[4] = {start, goal, A, B};

    g_graph graph = {vertices, edges};

    g_path *search_path = search(graph, start, 1, 0);
 
    return 0;
}
#endif
