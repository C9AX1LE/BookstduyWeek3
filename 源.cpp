#include<iostream>
using namespace std;
#define MaxSize 100
struct SeqStack
{
	int data[MaxSize];
	int top;
};
void Create(SeqStack& S)
{
	S.top = -1;
}
int IsEmpty(SeqStack S)
{
	if (S.top == -1) return 1;
	else return 0;
}
int IsFull(SeqStack S)
{
	if (S.top >= MaxSize - 1) return 1;
	else return 0;
}
void Push(SeqStack& S, int x)
{
	if (IsFull(S))
	{
		cout << "栈满,无法入栈" << endl;
		return;
	}
	S.data[++S.top] = x;
}
void Pop(SeqStack& S, int& x)
{
	if (IsEmpty(S))
	{
		cout << "栈空,无法出栈" << endl;
		return;
	}
	x = S.data[S.top--];
}
void Display(SeqStack S)
{
	if (IsEmpty(S))
	{
		cout << "栈空,无元素输出" << endl;
		return;
	}
	int i = S.top;
	while (i >= 0)
		cout << S.data[i--] << " ";
	cout << endl;
}
void main()
{
	SeqStack S;
	Create(S);
	Push(S, 1);
	Push(S, 2);
	Display(S);
	int x;
	Pop(S, x);
	Display(S);
	Push(S, 3);
	Display(S);
}
