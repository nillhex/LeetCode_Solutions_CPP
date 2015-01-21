/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class MinStack {
public:
    stack<int> s;
    stack<int> min_s;
    void push(int x) {
        s.push(x);
        if(min_s.size()==0) min_s.push(x);
        else
        {
            if(min_s.top()>=x) min_s.push(x);   //!!!必须要有等于符号，以免发生多次pop导致min_s没有值
        }
    }

    void pop() {
        if(s.top()==min_s.top()) min_s.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return min_s.top();
        
    }
};