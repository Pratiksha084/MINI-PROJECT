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
        cout<<"Press 1 for Food \nPress 2 for Stationery \nPress 3 for Sports \nPress 4 to display your itemized list\n";
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