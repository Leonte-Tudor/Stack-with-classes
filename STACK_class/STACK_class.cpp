#include <iostream>
#include "STACK.h"
using namespace std;

STACK::STACK() {
	top = -1;
}
int STACK::isEmpty() {
	if (top == -1)
		return 1;
	else
		return 0;
}
int STACK::isFull() {
	if (top == (SIZE-1))
		return 1;
	else
		return 0;
}
int STACK::push(int n) {
	if (isFull()) {
		return 0;
	}
	num[++top] = n;
	return n;
}
int STACK::pop() {
	int temp;
	if (isEmpty()) return 0;
	temp = num[top--];
	return temp;
}
void STACK::displayItems(int nr) {
	int i;
	cout << "STACK #"<<nr<< " is: ";
	for (i = (top); i >= 0; i--)
		cout << num[i] << " ";
	cout << endl;
}
int Top(STACK S)
{
	return S.num[S.top];
}
void sortStack(STACK &S) {
	STACK aux;
	while (!S.isEmpty())
	{
		int elem = S.pop();
		while (!aux.isEmpty() && Top(aux) < elem)
		{
			S.push(aux.pop());
		}
		aux.push(elem);
	}
	while (!aux.isEmpty())
	{
		S.push(aux.pop());
	}
}
int main()
{
	STACK S1,S2,S3;
	int n,i;
	for (i = 0; i < SIZE; i++)
	{
		//cin >> n;
		S1.push(i);
	}
	S1.displayItems(1);
	for (i = 0; i < SIZE; i++)
	{
		n=S1.pop();
		S2.push(n);
	}
	S2.displayItems(2);
	for (i = 0; i < SIZE; i++)
	{
		cin >> n;
		S3.push(n);
	}
	sortStack(S3);
	S3.displayItems(3);

}

