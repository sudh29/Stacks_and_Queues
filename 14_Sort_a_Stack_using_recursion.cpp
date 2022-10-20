/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
    priority_queue<int>q;
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
}
