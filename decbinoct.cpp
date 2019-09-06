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
	int a,ch;
	do{
	cout<<"Enter Element"<<endl;
	cin>>a;
	cout<<"1.Conversion from Decimal to Binary\n2.Conversion from Decimal to Octal\n3.Exit"<<endl;
	cout<<"Enter your choice:""\t";
	cin>>ch;

	switch(ch)
	{	
		case 1:		// Decimal to Binary
				while(a!=0)
				{	
					s.push(a%2);
					a=a/2;
				}
				while(!s.IsEmpty())
				{
					cout<<s.peep();
					s.pop();
				}
		
			break;
		case 2:		//Decimal to Octal
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
	
				break;
		case 3:
				exit(3);
		default:cout<<"Invalid Choice"<<endl;
			break;
			
	}
	cout<<endl;																}	
	while(ch!=3);
	cout<<endl;
	return 0;
}


