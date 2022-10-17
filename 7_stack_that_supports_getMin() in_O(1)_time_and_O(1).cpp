void push(stack<int>& s, int a){
    s.push(a);
}

bool isFull(stack<int>& s,int n){
	return s.size()==n;
}

bool isEmpty(stack<int>& s){
	return s.size()==0;
}

int pop(stack<int>& s){
    if (s.size()>0){
    	int a = s.top();
    	s.pop();
    	return a;}
	else{
	    return -1;
	}
}

int getMin(stack<int>& s){
	int min_val = 10000000;
	while(!isEmpty(s)){
	    int a = s.top();
	    min_val = min(min_val,a);
	    s.pop();
	}
	return min_val;
}
