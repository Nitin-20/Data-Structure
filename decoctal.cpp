#include<iostream>
#include<stdexcept>
#define SIZE 50
using namespace std;
class Stack
{
	int top;
	int arr[SIZE];
	public:
	Stack():top(-1){}
	bool IsEmpty()
	{
	
		return(top==-1);
	}
	bool IsFull()
	{
		return(top==SIZE-1);
	}
	void pop()
	{
		if(IsEmpty())
		{
			throw runtime_error("STACK UNDERFLOW\n");
		}
		arr[top--];
	}
	void push(int a)
	{
		if(IsFull())
		{
			throw runtime_error("STACK OVERFLOW\n");
		}
		arr[top++];
		arr[top]=a;
	}
	int peep()
	{
		if(IsEmpty())
		{
			throw runtime_error("STACK UNDERFLOW\n");
		}
		return arr[top];
	}
};
int main()
{
	Stack s;
	int a;
	cout<<"Enter Element"<<endl;
	cin>>a;
	while(a!=0)
	{	
	s.push(a%8);
	a=a/8;
	}
	while(!s.IsEmpty())
	{
	cout<<s.peep();
	s.pop();
	}
		
	return 0;
}


