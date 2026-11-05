#include <iostream>
#include "ILOA.h"

int main() {
    GeneralTree<char> tree('A');
    GeneralTreeNode<char>* root = tree.getRoot();

    GeneralTreeNode<char>* b = tree.createNode('B');
    GeneralTreeNode<char>* c = tree.createNode('C');
    GeneralTreeNode<char>* d = tree.createNode('D');
    GeneralTreeNode<char>* e = tree.createNode('E');
    GeneralTreeNode<char>* f = tree.createNode('F');
    GeneralTreeNode<char>* g = tree.createNode('G');

    tree.addChild(root, b);
    tree.addChild(root, c);
    tree.addChild(root, d);
    tree.addChild(root, e);
    tree.addChild(root, f);
    tree.addChild(root, g);

    GeneralTreeNode<char>* h = tree.createNode('H');
    tree.addChild(d, h);

    GeneralTreeNode<char>* i = tree.createNode('I');
    GeneralTreeNode<char>* j = tree.createNode('J');
    tree.addChild(e, i);
    tree.addChild(e, j);

    GeneralTreeNode<char>* k = tree.createNode('K');
    GeneralTreeNode<char>* l = tree.createNode('L');
    GeneralTreeNode<char>* m = tree.createNode('M');
    tree.addChild(f, k);
    tree.addChild(f, l);
    tree.addChild(f, m);

    GeneralTreeNode<char>* n = tree.createNode('N');
    tree.addChild(g, n);

    GeneralTreeNode<char>* p = tree.createNode('P');
    GeneralTreeNode<char>* q = tree.createNode('Q');
    tree.addChild(j, p);
    tree.addChild(j, q);

    std::cout << "PreOrder: " << std::endl;
    preOrder(root);
    std::cout << "\n";

    std::cout << "In Order: " << std::endl;

    inOrder(root);
    std::cout << "\n";

    std::cout << "Post Order: " << std::endl;
    postOrder(root);
    std::cout << "\n";

    return 0;
}