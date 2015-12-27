/* STRUCTS */
typedef struct{
    char *label;
    int value;
    int goal;
} vertex;

typedef struct{
    vertex vertices[2];
    int cost;
} edge;

typedef struct{
    edge *path_head;
} path;

/* DEFAULTS */
const vertex VERTEX_DEFAULT = { "", 0, 0};
const edge EDGE_DEFAULT = { {NULL, NULL}, 1};
const path PATH_DEFAULT = { NULL };

/* PROTOTYPES */

