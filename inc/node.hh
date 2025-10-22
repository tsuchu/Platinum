#ifndef NODE_HEADER
#define NODE_HEADER

#include <vector>

enum nodeType {
    PARENT, LEAF_TERMINAL, LEAF_DUPLICATE
};


class Node {
public:
    std::vector<short> marking;

private:
    short numChildren;
    nodeType nt;
    std::vector<Node> connectedNodes;
    std::vector<short> transitions;
} Node;

#endif