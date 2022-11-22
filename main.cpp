#include "BST.h"
//#include "CLQueue.h"

using namespace std;
int main() {
  BST myBST;
  //TNode* curNode;
  myBST.PutItem(6);
  myBST.PutItem(3);
  myBST.PutItem(7);
  myBST.PutItem(9);
  myBST.PutItem(5);
  myBST.PutItem(1);
  BST clonedBST(myBST);
  myBST.DeleteItem(3);
  
  cout<<"My Tree: ";
  myBST.PrintTree();
  cout<<"The height of the Tree: "<<myBST.GetHeight()<<endl; // return 3 for the max height
  cout<<"The Ratio of the Tree: "<<myBST.GetIHRatio()<<endl;
  cout<<"Length of BST: "<<myBST.GetLength()<<endl;
  myBST.ResetTree(REV_IN_ORDER);
  cout<<"My Tree Rev-Order: ";
  while (!(myBST.TravEmpty())) {
	cout<< myBST.GetNextItem();
    if (!myBST.TravEmpty())
    	cout<<", ";
  }
  cout<<endl;
  cout<<"Cloned Tree: ";
  clonedBST.PrintTree();
  clonedBST.MakeEmpty();
  clonedBST.PutItem(5);
  cout<<"The height of the Cloned Tree: "<<clonedBST.GetHeight()<<endl; // return -1 when empty
  cout<<"Cloned Tree V2: ";
  clonedBST.PrintTree();
  int curItem;
  myBST.ResetTree(PRE_ORDER);
  cout<<"My Tree Pre-Order: ";
  while (!(myBST.TravEmpty())) {
    cout<< myBST.GetNextItem();
    if (!myBST.TravEmpty())
      cout<<", ";
  }
  cout<<endl;
  
  myBST.ResetTree(POST_ORDER);
  cout<<"My Tree Post-Order: ";
  while (!(myBST.TravEmpty())) {
    cout<< myBST.GetNextItem();
    if (!myBST.TravEmpty())
      cout<<", ";
  }
  cout<<endl;
  
}
