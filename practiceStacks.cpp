#include <bits/stdc++.h>
#define n 100

using namespace std;

class Stack{
    private:
    int* arr;
    int top;
    public:
    Stack(){
        arr = new int[n];
        top =-1;
    }

    void push(int x){
        if (top==n-1)
        {
            cout << "Overflowm"<<endl;
        }
        top++;
        arr[top]= x;
    }
    void pop(){
        if (top==-1)
        {
            cout<<"Nothing to Pop"<<endl;
        }
        top--;
    }
    int Top(){
        if (top==-1)
        {
            cout<<"Nothing in Stack"<<endl;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main (){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.Top();
    cout<<st.empty();    


    return 0;
}
