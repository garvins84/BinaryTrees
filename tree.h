/*****************************************************************************
  Authors:       Dana Vrajitoru, IUSB, CS
                 William Knight, IUSB, CS
                 Chad George, IUSB alumni
  Class:         C243 Data Structures
  File name:     tree.h
  Last updated:  October 10, 2015.
  Description:   Definition of a tree structure
******************************************************************************/

#ifndef TREE_H
#define TREE_H

#include <vector>

/**************************  D A T A   T Y P E S  ****************************/

struct Node
{
    int  datum;
    Node *left;
    Node *right;
};
typedef Node * NodePtr;      // Define a new pointer data type.

/*****************  F U N C T I O N   P R O T O T Y P E S  *******************/

void  buildABinaryTree (NodePtr &rootp);

int   countOfZeroDataValues (NodePtr rootp);

void  destroyABinaryTree (NodePtr &rootp);

int   height (NodePtr rootp);

void  incrementEachDatum (NodePtr rootp);

void  prettyPrint (NodePtr rootp, int margin = 0);

void  graphPrint(NodePtr rootp);

int   graphPrintWalk(NodePtr rootp, int &pos, int level, 
                     vector<string>& output);

ostream &operator<<(ostream &out, NodePtr rootp);

void  reverse (NodePtr &rootp);

int   sumOfNegativeData (NodePtr rootp);

void  swapNodes (NodePtr &rootp);

#endif
