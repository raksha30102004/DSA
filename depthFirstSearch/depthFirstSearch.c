
#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"
void dfsRec(Graph g,int v,bool* visited);
void depthFirstSearch(Graph g, int src) {
	printf("%d\n",g->nV);
	//bool *visited = calloc(g->nV, sizeof(bool)); // givint it a zero
	//dfsRec(g,src,visited);
	//free(visited);

	printf("|n");
	// TODO
}

void dfsRec(Graph g,int v,bool* visited){
	visited[v] = true; 
	printf("%d", v); 
	struct graph *curr = g->edges[v];
	for(; curr != NULL ; curr = curr->next){
		int w = curr->v; 
		if (!visited[w]){
			dfsRec(g,w,visited);
		}
	}

}
