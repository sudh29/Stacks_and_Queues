class Solution {
	public:
	string FirstNonRepeating(string A){
        int array[26]={},index=0;
        string ans="";
        queue<char>q;
        
        for(int i=0;i<A.size();i++){
            char ch=A[i];
            index=ch-'a';
            array[index]++;
            q.push(ch);
                       
            while(!q.empty()){
                if(array[q.front()-'a']>1){
                    q.pop();
                }
                else{
                    ans.push_back(q.front());
                    break;
                }
            }
            if(q.empty()){
                ans.push_back('#'); 
            }
        }
        return ans;
	}

};

////////////////////////////////////////////

class Solution {
	public:
	string FirstNonRepeating(string A){
        string ans;
        queue<char>q;
        unordered_map<char, int> m;
        for(int i=0;i<A.size();i++){
            m[A[i]]++;
            if(m[A[i]]==1) q.push(A[i]);
            while(!q.empty() && m[q.front()]!=1){
                q.pop();
            }
            if(q.empty()) ans+='#';
            else ans+= q.front();
        }
        return ans;
	}

};
