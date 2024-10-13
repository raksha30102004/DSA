
#include <stdio.h>
#include <stdlib.h>

#include "Graph.h"
#include "Queue.h"

void breadthFirstSearch(Graph g, int src) {
	int *predecessor = malloc(g->nv*sizeof(int));
	Queue q = QueueNew(); 
	for ( int i = 0; i < g->nV; i++){
		predecessor[i] = -1;
	}
    QueueEnqueue(q,src);
	predecssor[src] = src; 
	for (Queuesize() >0){
		int w = QueueDequeue(q); 
		printf("%d ",w);
		struct node * curr = g->edge[w];
		for (; curr!= NULL;curr= curr->next){
			v= curr->v; 
			if ( predecessor[v]== -1){
				QueueEnqueue(q,v);
			}
		}

	}

	printf("\n");
	free(predecessor);
	QueueFree(q);
}
	


