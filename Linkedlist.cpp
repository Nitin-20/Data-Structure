#include"Node.cpp"
template<class T>
class Linkedlist
{
	Node<T>* head;
	Node<T>* tail;
	int count;
	public:
	Linkedlist():head(nullptr),tail(nullptr),count(0){}
	bool Isfull(){
		return false;
	}
	bool IsEmpty(){
		return(nullptr==head && nullptr==tail);
	}
	int size()
	{
		return count;
	}
	bool Addatend(T ele)
	{
		Node<T> *temp=new Node<T>;
		temp->setdata(ele);
		if (IsEmpty())
		{
			temp->setnext(nullptr);
			head=tail=temp;
		}
		else{
			temp->setnext(nullptr);
			tail->setnext(temp);
			tail=temp;
		}
		count++;
	}
	bool Addatbegin(T ele)
	{
		Node<T> *temp=new Node<T>;
		temp->setdata(ele);
		if (IsEmpty())
		{
			//temp->setnext(nullptr);
			head=tail=temp;
		}
		else{
			temp->setnext(head);
			//tail->setnext(temp);
			head=temp;
		}
		count++;
	}
	T Delatbegin()
	{
		T ele;
		if(!IsEmpty())
		{
			ele=head->getdata();
			Node<T> *t=head;
			if(head==tail)
			{
				tail=NULL;
				head=NULL;
				delete t;
				count--;
			}
			else
			{
				ele=head->getdata();
				head=head->getnext();
				delete t;
				count--;
			}
	}
		return 0;
	}
	 T Delatend()
        {
                T ele;
                if(!IsEmpty())
                {
                        ele=tail->getdata();
                        Node<T> *t=tail;
                        if(head==tail)
                        {
                                tail=NULL;
                                head=NULL;
                                delete t;
				count--;
                        }
                        else
                        {	Node<T> *t=head;
				while(tail!=t->getnext())
					{
						t=t->getnext();
					}
                                ele=tail->getdata();
                                t->setnext(NULL);
                                delete tail;
				tail=t;
				count--;
                        }
        }
                return 0;
        }


	bool Insertat(int pos, T ele)
	{
		bool bsuccess=false;
		if(count>=pos-1)
		{
			Node<T> *p=head;
			Node<T> *q=head->getnext();
			int no=0;
			while(no!=pos-2)
			{
				p=p->getnext();
				q=q->getnext();
				no++;
			}
			Node<T> *temp=new Node<T>;
			temp->setnext(q);
			temp->setdata(ele);
			p->setnext(temp);
			count++;
			bsuccess=true;
		}
		return bsuccess;

		}

	
	void  Display(){
		cout<<"\n";
		Node<T> *t=head;
		while(nullptr!=t){
			cout<<t->getdata()<<"->";
			t=t->getnext();
		}
		cout<<"NULL"<<endl;
	}
};

int main()
{
	Linkedlist<int>ll;
	ll.Addatend(11);
	ll.Addatend(22);
	ll.Addatbegin(33);
	ll.Addatbegin(44);
	ll.Insertat(3,55);
	ll.Delatend();
	ll.Delatbegin();
	ll.Display();
}
