#include<iostream>
using namespace std;
template<class T>
class queue
{
	T q[20];int i;int max=20;
	int rear,front;
	public:
		queue()
		{
			rear=front=-1;
		}
		void enqueue()
		{
			T in;
			if(rear==-1&&front==-1)
			{
				rear=0;
			}
			cout<<"Enter element: ";
			cin>>in;
			if(front==max-1)
			{
				cout<<"Overflow.";
			}
			else
			{
				q[++front]=in;
			}
		}
		void dequeue()
		{
			if(rear==-1||front<rear)
			{
				cout<<"Underflow.";
			}
			else
			{
			T pop=q[rear];
			rear++;
			cout<<"Dequeued element is "<<pop; 	
			}
		}
		void display()
		{   cout<<"Queue: ";
			for(i=rear;i<=front;i++)
			{
				cout<<q[i]<<"---";
			}
		}
};
int main()
{
	int ch, op,op1,op2,option;char o,o1,o2;
	queue<int> s;
	queue<float>s1;
	queue<char>s2;
	do
	{
	cout<<"Enter your choice(For 1.int/2.float/3.char):  ";
	cin>>ch;
	switch(ch)
	{
		case 1:
		do{
		cout<<"1.Enqueue /2.Dequeue /3.Display";
	    cin>>op;
	    switch(op)
	    {
		    case 1:   s.enqueue(); break;
		    case 2:   s.dequeue(); break;
			case 3:   s.display(); break;
	    }cout<<"Continue(y/n): ";
	    cin>>o;
		}while(o=='y');
		break;
		case 2:
	do{
	cout<<"1.Enqueue /2.Dequeue /3.Display";
	cin>>op1;
	switch(op1)
	{
		    case 1:   s1.enqueue(); break;
		    case 2:   s1.dequeue(); break;
			case 3:   s1.display(); break;
	}cout<<"Continue(y/n): ";
	cin>>o1;
	
	}while(o1=='y');
	break;
	
	case 3:	
	do{
	cout<<"1.Enqueue /2.Dequeue /3.Display";
	cin>>op2;
	switch(op2)
	{
		    case 1:   s2.enqueue(); break;
		    case 2:   s2.dequeue(); break;
			case 3:   s2.display(); break;
	
	}cout<<"Continue(y/n): ";
	cin>>o2;
	}while(o2=='y');
	break;
    }
    cout<<"Next Instance....";
    cin>>option;
}while(option==0);
	return 0;
}
