#include<iostream>
using namespace std;
template<class T>
class Node
{
	T data;
	Node* next;
	public:
	T getdata(){
		return data;
	}
	void setdata(T ele)
	{
		data=ele;
	}

	Node* getnext(){
		return next;
	}
	void setnext(Node* temp)
	{
		next=temp;
	}
};
