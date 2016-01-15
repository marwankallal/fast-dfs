#include "dfs.h"

#define THREAD_MAX 4

/* main should be used only if specified by make, otherwise it should compile as a library */
#ifndef LIBRARY
int main(int argc, char **argv){
    return 0;
}
#endif

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
