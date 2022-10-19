# CompE160-Projects
Project made in class based on the week's lesson.

Given the IntNode struct, define the IndexOf() function to return the index of parameter target or -1 if not found.

Note: The first index after the head node is 0.

Ex: If the list contains:

    head -> 14 -> 191 -> 22 -> 99
IndexOf(headNode, 22) returns 2.

Ex: If the list contains:

    head ->
IndexOf(headNode, 22) returns -1.

Develop your program using the Eclipse or VSCode IDE. Import the following starter template code below into the IDE you use as C source file main.c.

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct IntNode_struct {
      int dataVal;
      struct IntNode_struct* nextNodePtr;
    } IntNode;

    // Initialization
    void InitializeIntNode(int dataInit, IntNode* thisNode) {
      thisNode->dataVal = dataInit;
      thisNode->nextNodePtr = NULL;
    }

    // Get node value
    int GetNodeData(IntNode* thisNode) {
      return thisNode->dataVal;
    }

    // Get pointer to next node
    IntNode* GetNext(IntNode* thisNode) {
    return thisNode->nextNodePtr;
    }

    /* Insert node after this node.
      Before: this -- next
      After:  this -- node -- next
    */
    void InsertAfter(IntNode* thisNode, IntNode* newNode) {
      IntNode* tempNext = NULL;

      tempNext = thisNode->nextNodePtr;
      thisNode->nextNodePtr = newNode;
      newNode->nextNodePtr = tempNext;
    }

    // Return index of target item
    int IndexOf(IntNode* headNode, int target) {
      /* Type your code here. */

    }

    int main() {
      IntNode* headNode;
      IntNode* currNode;
      IntNode* lastNode;
      int index;

      // Initiaize head node
      headNode = (IntNode*)malloc(sizeof(IntNode));
      InitializeIntNode(-1, headNode);
      lastNode = headNode;

       // Add nodes to the list
      for (int i = 0; i < 20; ++i) {
          currNode = (IntNode*)malloc(sizeof(IntNode));
          InitializeIntNode(i, currNode);
          InsertAfter(lastNode, currNode);
          lastNode = currNode;
      }

      index = IndexOf(headNode, 15);
      printf("%d\n", index);
   
      return 0;
    }
Demonstrate your program to your TA during your laboratory session who will then assign you a grade in Canvas.
