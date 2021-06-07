#include <stdio.h>
#include "sources/BinaryTree.hpp"


using ariel::BinaryTree;
using namespace std;
int main()
{

/* int tree */
ariel::BinaryTree<int> tree;
 tree.add_root(1);
 tree.add_left(1,2);
 tree.add_right(1,3);
 tree.add_left(2,4);
 tree.add_right(3,5);
 tree.add_left(4,6);
 tree.add_right(5,7);
 tree.add_left(6,8);
 tree.add_right(7,9);
 tree.add_right(2,12);
 tree.add_right(12,15);
 tree.add_left(12,23);
 tree.add_right(4,17);
 tree.add_left(3,10);
 tree.add_left(5,19);
 tree.add_left(7,18);

 cout << "inOrder" <<endl;
 for(BinaryTree<int>::in_iterator i = tree.begin_inorder(); i != tree.end_inorder() ; ++i){
     cout << (*i);
     cout << ",";
 } 

 cout << "" << endl;
 cout << "" << endl;

 cout << "preOrder" <<endl;
 for(BinaryTree<int>::pre_iterator i = tree.begin_preorder(); i!= tree.end_preorder(); ++i){
      cout << (*i);
      cout << ",";
 }
 
 cout << "" << endl;
 cout << "" << endl;

 cout << "postOrder" <<endl;
 for(BinaryTree<int>::post_iterator i = tree.begin_postorder(); i != tree.end_postorder(); ++i){
      cout << (*i);
      cout << ",";
 }

 cout << "" << endl;
 cout << "" << endl;

//overide the root of the tree:  then cout the tree
tree.add_root(99);

cout << "inOrder" <<endl;
 for(BinaryTree<int>::in_iterator i = tree.begin_inorder(); i != tree.end_inorder() ; ++i){
     cout << (*i);
     cout << ",";
 } 

 cout << "" << endl;
 cout << "" << endl;

 cout << "preOrder" <<endl;
 for(BinaryTree<int>::pre_iterator i = tree.begin_preorder(); i!= tree.end_preorder(); ++i){
      cout << (*i);
      cout << ",";
 }
 
 cout << "" << endl;
 cout << "" << endl;

 cout << "postOrder" <<endl;
 for(BinaryTree<int>::post_iterator i = tree.begin_postorder(); i != tree.end_postorder(); ++i){
      cout << (*i);
      cout << ",";
 }

 cout << "" << endl;
 cout << "" << endl;

 //overide some nodes from the tree then cout the tree:
 tree.add_right(99,37);
 tree.add_left(99,33);
 tree.add_right(33,15);
 tree.add_left(37,26);
 tree.add_right(37,17);
 tree.add_left(17,0);
 tree.add_right(0,999);

 cout << "inOrder" <<endl;
 for(BinaryTree<int>::in_iterator i = tree.begin_inorder(); i != tree.end_inorder() ; ++i){
     cout << (*i);
     cout << ",";
 } 

 cout << "" << endl;
 cout << "" << endl;

 cout << "preOrder" <<endl;
 for(BinaryTree<int>::pre_iterator i = tree.begin_preorder(); i!= tree.end_preorder(); ++i){
      cout << (*i);
      cout << ",";
 }
 
 cout << "" << endl;
 cout << "" << endl;

 cout << "postOrder" <<endl;
 for(BinaryTree<int>::post_iterator i = tree.begin_postorder(); i != tree.end_postorder(); ++i){
      cout << (*i);
      cout << ",";
 }

 cout << "" << endl;
 cout << "" << endl;


/* string tree */
ariel::BinaryTree<string> tree2;
 tree2.add_root("real madrid");
 tree2.add_left("real madrid","champions leage");
 tree2.add_right("real madrid","la liga");
 tree2.add_left("champions leage","13");
 tree2.add_right("champions leage","2018");
 tree2.add_left("la liga","34");
 tree2.add_right("la liga","2019-2020");
 

cout << "inOrder" <<endl;
 for(BinaryTree<string>::in_iterator i = tree2.begin_inorder(); i != tree2.end_inorder() ; ++i){
     cout << (*i);
     cout << ",";
 } 

 cout << "" << endl;
 cout << "" << endl;

 cout << "preOrder" <<endl;
 for(BinaryTree<string>::pre_iterator i = tree2.begin_preorder(); i!= tree2.end_preorder(); ++i){
      cout << (*i);
      cout << ",";
 }
 
 cout << "" << endl;
 cout << "" << endl;

 cout << "postOrder" <<endl;
 for(BinaryTree<string>::post_iterator i = tree2.begin_postorder(); i != tree2.end_postorder(); ++i){
      cout << (*i);
      cout << ",";
 }

 cout << "" << endl;
 cout << "" << endl;

 //overide the root of the tree:  then cout the tree
 tree2.add_root("barcelona");
 tree2.add_left("barcelona","champions leage");
 tree2.add_right("barcelona","la liga");
 tree2.add_left("champions leage","5");
 tree2.add_right("champions leage","2015");
 tree2.add_left("la liga","26");
 tree2.add_right("la liga","2018-2019");
 
 cout << "inOrder" <<endl;
 for(BinaryTree<string>::in_iterator i = tree2.begin_inorder(); i != tree2.end_inorder() ; ++i){
     cout << (*i);
     cout << ",";
 } 

 cout << "" << endl;
 cout << "" << endl;

 cout << "preOrder" <<endl;
 for(BinaryTree<string>::pre_iterator i = tree2.begin_preorder(); i!= tree2.end_preorder(); ++i){
      cout << (*i);
      cout << ",";
 }
 
 cout << "" << endl;
 cout << "" << endl;

 cout << "postOrder" <<endl;
 for(BinaryTree<string>::post_iterator i = tree2.begin_postorder(); i != tree2.end_postorder(); ++i){
      cout << (*i);
      cout << ",";
 }
}
