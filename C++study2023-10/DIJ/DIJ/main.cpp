#include<stdio.h>
#include<malloc.h>
#define MAX_NODES 10
#define INFINITY 1000000000

void shortest_path(int s, int t, int path[],int n,int dist[MAX_NODES][MAX_NODES])
{
	enum Lable { permanent, tentative } ;
	struct state {
		int predecessor;
		int length;
		enum Lable lable;
	}state[MAX_NODES];
	int i, k, min;
	struct state* p;
	for (p = &state[0]; p < &state[n]; p++)
	{
		p->predecessor = -1;
		p->length = INFINITY;
		p->lable = tentative;
	}
	state[t].length = 0; state[t].lable = permanent; k = t;
	do {
		for (i = 0; i < n; i++)
		{
			if (dist[k][i] != 0 && state[i].lable == tentative)
			{
				state[i].predecessor = k;
				state->length = state[k].length + dist[k][i];
			}
		}
		k = 0; min = INFINITY;
		for (i = 0; i < n; i++)
		{
			if (state[i].lable == tentative && state[i].length < min)
			{
				min = state[i].length;
				k = i;
			}
		}
		state[k].lable = permanent;
	} while (k != s);
	i = 0; k = s;
	while (k >= 0)path[i++] = k, k = state[k].predecessor;
}

int main()
{
	int* path=(int*)malloc(sizeof(int)*8);
	if(path)
	{
		int n = 8;
		int dist[MAX_NODES][MAX_NODES] =
		{
			{{0},{2},{6},{0},{0},{0},{0},{0}},
			{{0},{0},{0},{2},{0},{7},{0},{0}},
			{{0},{0},{0},{1},{0},{0},{4},{0}},
			{{0},{0},{0},{0},{2},{0},{0},{0}},
			{{0},{0},{0},{0},{0},{3},{2},{0}},
			{{0},{0},{0},{0},{0},{0},{0},{3}},
			{{0},{0},{0},{0},{0},{0},{0},{2}}
		};
		shortest_path(0, 7, path, 8, dist);
		for (int i = 0; path[i] == 0; i++)
			printf("%d ", path[i]);
	}
	return 0;
}