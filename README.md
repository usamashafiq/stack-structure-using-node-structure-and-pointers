# stack-structure-using-node-structure-and-pointers
Implement the given methods of stack structure using node structure and pointers. List of stack functions is given at the end
a) Create node structure that can store integers
b) Create stack class, declare data members as discussed and write constructor
• Write main method and create a stack object
c) Write display method that display the stack each element on new line from top to bottom. Take care of s_top (it should not move or any other thing should not change)
• Call this method in main to test
d) Write push method that accept an integer and place it at the start of stack. Properly adjust the pointer and return bool
• Call this method in main to push 21, 54, 67, 88, 44, 33, 48, 44, 109, 133 in the stack, and display to confirm
e) Write push method that accept object of node and copy its data to push in stack. Properly adjust the pointer.
• In main create a node with 189 and call this method to push and display to confirm
f) Write pop method that remove top element from the stack and return the element value if element is removed. If stack is empty then return -9999 as sentinel value. Implement the cases as discussed in theory. Properly take care of pointers.
• Call this method in main to remove an element and display to confirm
Write stackSize method that returns size of stack using counter we hold in stack
• Call this method in main
h) Write stackSizeByPointer method that returns size of stack by traversing the stack
• Call this method in main and match results from above
i) Write destructor of stack that should fully empty the stack. Properly de-attach element one by one and delete form memory

Using above Stack class implement the Arrange blocks game.
o At the start you are given one jar (Named A) having 4 blocks randomly placed on the top of each other
o You are given Two more Jars (named B, C)
o Objective is to move blocks from Jar A and put them in Jar B such that Blocks with higher value should be at the top and lower one at the bottom. User can use Jar C as temporary Jar
o You can pick block from top of Jar only and put in on the top of Jar only
o Ask the user to choose Jars to move blocks
o When User Says -1 then check Jar B that blocks are in proper positions or not
