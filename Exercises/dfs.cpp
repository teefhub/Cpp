/*Without using Recursion:
Consider a stack ‘s’
push(v)
do
while s is empty
vßpop
if v is found to be not labeled as undiscovered
label it
for all edges between ‘v’ and ‘ w’ in g.adjcentEdge(v) do
s.push(w)*/

#include <iostream>
#include <ctime>
#include <malloc.h>

using namespace std;

struct node {
    int info;
    struct node* next;
};

class Stack{
    struct node*top;
    public Stack();
    
}
