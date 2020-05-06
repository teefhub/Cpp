/*C++ Program to Check the Connectivity of Directed Graph Using BFS*/
#include <iostream>
#include <queue>

#define NODE 5 //0-4 = 5 nodes in total
using namespace std;
int graph [NODE][NODE] = {      //create a graph 
//  v0  v1  v2 v3 v4
   {0, 1, 0, 0, 0},            //0 = not connected, 
   {0, 0, 1, 0, 0},             //1 = connected
     {0, 0, 0, 1, 1},
     {1, 0, 0, 0, 0},
     {0, 1, 0, 0, 0}
};

void traverse (int s, bool visited[]){
    visited[s] = true; //mark vertex as visited
    queue <int> que; //declare a new memory type
    que.push(s); //insert s into the queue
    while(!que.empty()){
        int u = que.front();//push u to the front of the queue
        que.pop(); 
        for(int i = 0; i <NODE; i++){
            if(graph[i][u]){
                if(!visited[i]){ //when the node is non-visited
                    visited[i] = true;
                    que.push(i);
                }
            }
        }
    }

}

bool isConnected(){ //checking if the nodes are neighbours
    bool *vis = new bool[NODE];
    for(int u; u< NODE; u++){ //for all vertex u as startpoint, check whether nodes are visible
        for(int i = 0; i< NODE; i++){
            vis[i] = false; //initilise as no node is visited
            traverse(u,vis);
            for(int i =0; i< NODE; i++){
                if(!vis[i]){ //if there is a node, not visited by traveral,  graph is not connected.
                    return false;
                }
            }
        }
    }

}
int main(){
    if(isConnected()) 
        cout << "The Graph is connected.";
   else
      cout << "The Graph is not connected.";
    return 0;
}