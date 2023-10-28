# MINI-PROJECT

AIM
Write a C++ program to
implement stack and queue
for the following situation.
Food items, Stationery items
and Sports items are arriving
continuously in the
supermarket randomly but in a
queue. Sort and store the items
in the three different stacks
and update and display the
individual count. Also,
display the contents of
individual stacks.

THEORY
C++ is one of the common programming languages that is mainly used in the
development of high-performance applications, Operating Systems, and games.
C++ is a powerful and efficient language that provides a wide range of Data
Structures and Algorithms for complex data processing tasks. C++ Data Structures
and Algorithms (DSA) is a part of Computer Science in which there is the study of
different Algorithms and Data Structures using the C++ programming language.
Data Structures are the basic block of Computer Science Technology. Data
Structures are used to store the data in such a way that we can access them in a
very efficient way. There are a lot of Data Structures used in the C++ Programming
language Arrays, Stacks, Queues, Linked-lists, Trees, and Graphs.
Stack: A stack is a linear data structure in which elements can be
inserted and deleted only from one side of the list, called the top. A
stack follows the LIFO (Last In First Out) principle, i.e., the element
inserted at the last is the first element to come out. The insertion of an
element into the stack is called push operation, and the deletion of an
element from the stack is called pop operation. In stack, we always keep
track of the last element present in the list with a pointer called top.
Queue is a linear data structure in which elements can be inserted only from one
side of the list called rear, and the elements can be deleted only from the other
side called the front. The queue data structure follows the FIFO (First In First Out)
principle, i.e. the element inserted at first in the list, is the first element to be
removed from the list. The insertion of an element in a queue is called
an enqueue operation and the deletion of an element is called
a dequeue operation. In queue, we always maintain two pointers, one pointing to
the element which was inserted at the first and still present in the list with
the front pointer and the second pointer pointing to the element inserted at the
last with the rear pointer.

ALGORITHM
1.START
2.Intializing stack and queue
3.While loop for selecting type of item or display.
4.Input item in its respective stack.
5.Displaying error message for wrong choice.
6.Displaying the stack and the items stored in it.
7.END

CODE
#include <iostream>
#include <queue>
#include <stack>
#include <string>
using namespace std;
int main() {
//Intializing stack and queue
queue<string> itemsQueue;
stack<string> foodStack, stationeryStack, sportsStack;
//While loop for selecting type of item or display
while (true)
{
int choice, situation;
string item;
cout << "Enter your choice : "<<endl;
cout<<"Press 1 for Food \nPress 2 for Stationery \nPress 3 for Sports \nPress 4
to display your itemized list\n";
cout<<"No space allowed in item names, use underscore instead"<<endl;
cin >> situation;
cout<<"\n";
if (situation == 4)
{
break;
}
cout << "Enter the item: ";
cin >> item;
cout<<"\n";
itemsQueue.push(item); //inputing item in its respective stack
if (situation == 1)
{
foodStack.push(item);
}
else if (situation == 2)
{
stationeryStack.push(item);
}
else if (situation == 3)
{
sportsStack.push(item);
}
else
{
//Displaying error message for wrong choice
cout<<"Error in choice\n";
}
}
//Displaying the stack and the items stored in it
cout << "Items in Food stack: " << foodStack.size() << endl;
while (!foodStack.empty())
{
cout << foodStack.top() << endl;
foodStack.pop();
}
cout << "Items in Stationery stack: " << stationeryStack.size() << endl;
while (!stationeryStack.empty())
{
cout << stationeryStack.top() << endl;
stationeryStack.pop();
}
cout << "Items in Sports stack: " << sportsStack.size() << endl;
while (!sportsStack.empty())
{
cout << sportsStack.top() << endl;
sportsStack.pop();
}
return 0;
}

OUTPUT
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
1
Enter the item: Apple
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
1
Enter the item: Orange
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
1
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
1
Enter the item: Apple
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
1
Enter the item: Orange
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
1
Enter the item: Bread
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
1
Enter the item: Milk
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
1
Enter the item: Oreo
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
2
Enter the item: Pen
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
2
Enter the item: Notebook
Enter your choice :
Press 1 for Food
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
3
Enter the item: Tennis ball
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
3
Enter the item: Bat
Enter your choice :
Press 1 for Food
Press 2 for Stationery
Press 3 for Sports
Press 4 to display your itemized list
No space allowed in item names, use underscore instead
4
Items in Food stack: 5
Oreo
Milk
Bread
Orange
Apple
Items in Stationery stack: 3
Eraser
Notebook
Pen
Items in Sports stack: 3
Bat
Tennis ball
Basketball
CONCLUSION
Here we have written a C++ program to implement stack and queue
for the following situation.
Food items, Stationery items and Sports items are arriving
continuously in the supermarket randomly but in a queue. Sort and
store the items in the three different stacks and update and display the
individual count. Also, display the contents of individual stacks
