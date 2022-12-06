#include<iostream>
using namespace std;
int n,i,f=-1,r=-1;
int *queue;

int Insert (int val)
{
    if (f == - 1)
    f = 0;
    r++;
    queue[r] = val;  
}

int Delete()
{
    return queue[f++];
}

int main()
{  
	queue = new int(n); 

    int ch,val;
    while(true)
    {
        cout<<"\nThis will perform following operations :\n1.Insert\n2.Delete\n3.Display elements in queue\n4.exit"<<endl;
        cout<<"\nEnter what operation you want :";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Insert the element in queue :";
                cin>>val;
                Insert(val);
                cout<<"The value "<<val<<" was inserted"<<endl;
                break;
            case 2:
                val = Delete();
                cout<<"The value "<<val<<" was deleted"<<endl;
                break;
            case 3:
                cout<<"Queue elements are :";
                for (i = f; i <= r; i++)
                { 
                    cout<<"\n"<<queue[i]<<" ";
                }
                cout<<endl;
                break;
            case 4:
                return 0;
            default:
                cout<<"please enter a valid operation."<<endl;
                break;    
        }
    }
}