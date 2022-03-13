#pragma once
#define SIZE 10
class STACK
{
protected:
	int num[SIZE];
	int top;
public:
	STACK();
	int push(int);
	int pop();
	int isEmpty();
	int isFull();
	void displayItems(int);
	friend int Top(STACK);
	void sortStack(STACK);
};