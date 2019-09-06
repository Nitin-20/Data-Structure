#include<iostream>
#include<stdexcept>
#define SIZE 5
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
	void push(int ele)
	{
		if(IsFull())
		{
			throw runtime_error("STACK OVERFLOW\n");
		}
		arr[top++];
		arr[top]=ele;
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
	int no,ch;
	do
	{
	cout<<"Choose Operation:"<<endl;
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"3.Peep"<<endl;
	cout<<"4.Exit"<<endl;
	cin>>ch;
	switch(ch)
	{
		
		case 1:{
			int ele;
			cout<<"Enter Element"<<endl;
			cin>>ele;
			try{
			s.push(ele);}
			catch(runtime_error e){cout<<e.what();}
		       }
			break;
		case 2:{
			       try{
			s.pop();
			       }
			       catch(runtime_error e){cout<<e.what();}
			       }
			break;
		case 3:

			{
				try{
				cout<<s.peep()<<endl;
				}
				catch(runtime_error e)
				{cout<<e.what();}
			}
			break;
		case 4:
			{
				exit(4);
			}

			default :cout<< "Invalid"<<endl;
				 break;

	}
}
	while(ch!=5);
	return 0;
}


