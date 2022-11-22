#include <iostream>
#include "CLQueue.h"
struct TNode {
  public:
  int item;
  TNode *left;
  TNode *right;
};

enum OrderType {PRE_ORDER, IN_ORDER, POST_ORDER, REV_IN_ORDER};


class BST {
  public:
  BST();
  BST(const BST& originalBST); //(Deep-)Copy constructor
  ~BST(); //Destructor
  
  
  //main BST functions that call helper functions using the root Node
  int GetItem(int gitem);
  void PutItem(int newitem);
  void DeleteItem(int ditem);
  int GetLength();
  void MakeEmpty();
  bool IsEmpty();
  bool IsFull();
  void PrintTree();
  void ResetTree(OrderType order);
  int GetNextItem();
  bool TravEmpty();
  
  int GetHeight(); // return the height
  double GetIHRatio(); // return the ratio
  
  private:
  //helper functions called to recursively view/manipulate sub-tree elements
  void Insert (TNode* &curnode, int newitem);
  int FindItem(TNode* curnode, int gitem);
  void Delete(TNode* &curnode, int ditem);
  void DeleteNode(TNode* &curnode);
  int CountNodes(TNode* curnode);
  void PrintNodes(TNode* curnode);
  void CopyNodes(TNode*& copyNode, const TNode* origNode);
  void DestroyNodes(TNode*& curNode);
  void PreNodes(TNode* curNode);
  void InNodes(TNode* curNode);
  void PostNodes(TNode* curNode);
  
  int FindHeight(TNode* curNode); // Gets the maximum number of branches required to travel from root node to any decendants.
  double FindIHRatio(TNode* curNode); // Gets the ratio of the height
  void RevNodes(TNode* curNode); // reverse the order of the list to greatest to least
  
  TNode *root;
  CLQueue *TravQueue;
};
