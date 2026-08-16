# Linked List 

- linked-list-1.c  : The first implementation where the head is pointing to the address of the 1st node, and all the other nodes are like they stores the address of the forward attached node, for push we can store the adderess in a temp variable of the latest node but for the pop we will have to traverse the linked list to get the latest node pointer inefficient at poping

- linked-list-2.c : The second implemenation for linked list in which it holds the address of the previous node instead of next, the first node alwas contains NULL as ponter address for previous node as none exist, each node will conatin non null address except the first one, The TOP will have the address of the latest node, and that latest node will have the address of the previous node, 
    - Adding workflow like new node at temp and temp->pre-ptr = TOP , and then TOP = temp 
    - Poping workflow like storing the TOP->pre_ptr in temp , then free(TOP) , TOP = temp 
    - It is a better implemetaion of stack as without any extra traversing for top 

