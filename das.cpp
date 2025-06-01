#include<iostream>
using namespace std;
class stack{
    private:
    int *arr;
    int top;
    int size;
    
    public:
    stack(int s){
        size = s;
        arr = new int[size];
        top = -1;
    }
    void push(int data){
        if(top >= size-1){
            cout<<"stack overload"<<endl;
            return;
        }
        
        arr[++top]= data;
    }
    int pop(){
        if(top == -1){
            cout<<"stack underflow"<<endl;
            return -1;
        }
        
       return arr[top--];
    }
    void peek() {
    if (top == -1) {
        cout << "No element available" << endl;
        return;
    }
    cout << "Top element is: " << arr[top] << endl;
}

    ~stack(){
        delete[] arr;
    }
};