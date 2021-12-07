#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class BaseArray 
{
private:
	int capacity; 
    int *mem;
public:  
    BaseArray(int capacity=100)
	{
        this->capacity = capacity; 
		mem = new int [capacity];
    }
    ~BaseArray() { delete [] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray
{
private:
	int size=-1;
	int index=0;
public:
	MyQueue(int x) : BaseArray(x)	{}

	void enqueue(int x)
	{
		put(++size, x);
	}
	
	int capacity()	
	{
		return getCapacity();	
	} 	
	
	int length()
	{
		return size+1;
	}
	
	int dequeue()
	{
		size--;
		return get(index++);
	}
};
int main(void)
{
	MyQueue mQ(100);
    int n;
    
    cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
    for(int i=0; i<5; i++)
	{
        cin >> n;
        mQ.enqueue(n);  
    }
    
    cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
    cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
    
	while(mQ.length() != 0)
        cout << mQ.dequeue() << ' '; 
        
    cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;  


    return 0;
}
