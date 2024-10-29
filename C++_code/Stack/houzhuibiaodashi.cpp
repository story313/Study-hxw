#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Stack{
	private:
		int maxSize;
		int top;
		T *listArray;
	public:
		void InitStack(){
			maxSize=100;
			top=0;
			listArray=new T[maxSize];
		}	
		void Push(T a){
			if(top!=maxSize)
			listArray[top++]=a;	
		}
		T Pop(){
			if(top!=0)
			return listArray[--top];
		}
		T Top(){
			return listArray[top-1];
		}
		int gettop(){
			return top;
		}
};
int main(){
	string a;
	getline(cin,a);
	Stack<int> stack;
	stack.InitStack();
    for(int i=0;a[i]!='\0';i++){
    	if(a[i]=='#')
			break;
    	else if(a[i]==' ')
		    continue;
    	else if(a[i]=='+'){
    		if(stack.gettop()>=2){
    		    int m=stack.Pop();
    		    int n=stack.Pop(); 		    
				int x=m+n;
				stack.Push(x);
			}
			else {
			    cout<<"Expression Error: "<<stack.Top();
				break;
				}
		}
    	else if(a[i]=='-'){
    		if(stack.gettop()>=2){
				int m=stack.Pop();
				int n=stack.Pop();
				int x=n-m;
				stack.Push(x);
			}
			else{
			    cout<<"Expression Error: ";
			    break;
				}
		}
    	else if(a[i]=='*'){
    		if(stack.gettop()>=2){
    		    int m=stack.Pop();
			    int n=stack.Pop();
			    int x=m*n;
				stack.Push(x);
			}
			else{ 
			    cout<<"Expression Error: ";
			    break;
				}
		}
    	else if(a[i]=='/'){
    		if(stack.gettop()>=2){
    		    if(stack.Top()!=0){
				    int m=stack.Pop();
				    int n=stack.Pop();
				    int x=n/m;
				    stack.Push(x);
			    }
			    else{
			       cout<<"Error:"<<stack.Top()<<"/0";
			       break;
			    }
		    }
			else{
			    cout<<"Expression Error: ";	
				break;
			}	
	    }
	    else
		    stack.Push(a[i]);
    }
    cout<<stack.Top();
	return 0;
}