
class Stack {
public: 
    queue<int> q1;
    queue<int> q2;
public:
    // Push element x onto stack.
    void push(int x) {
        q1.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
       int n=q1.size();
       if(q1.size()>1)
       {
       	  int i=0;
           while(i<n-1)
           {
               q2.push(q1.front());
               q1.pop();
               i++;
           }
           q1.pop();
           i=0;
           while(i<n-1)
           {
           	 q1.push(q2.front());
           	 q2.pop();
           	 i++;
           }
       }
       else q1.pop();
    }

    // Get the top element.
    int top() {
      int a;
      if(q1.size()>1)
       {
           while(!q1.empty())
           {
               q2.push(q1.front());
               a=q1.front();
               q1.pop();
           }
           while(!q2.empty())
           {
           	  q1.push(q2.front());
           	  q2.pop();
           }
       }
       else
       { a=q1.front();}
       return a;
    }

    // Return whether the stack is empty.
    bool empty() {
        return q1.empty();
    }
};