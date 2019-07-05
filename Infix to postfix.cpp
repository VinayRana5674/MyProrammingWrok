#include<bits/stdc++.h>
using namespace std;
int precedence(char c)
{
if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
	
}
bool Isoperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c=='^')
		return true;
	return false;
}

bool operand(char c)
{
	if (c >= '0' && c <= '9' || c>='a' && c<='z' || c>='A' && c<='Z')
		return true;
	return false;
}
int infixtopostfix(string expression)
{
	stack<char> operators;
	string postfix="";
	for(int i=0;i<expression.length();i++)
	{
		if(expression[i]==' ' || expression[i]==',')
		continue;
		
		if(operand(expression[i]))
		{
			postfix=postfix+expression[i];
		}
		else if(expression[i]=='(')
		{
			operators.push(expression[i]);
		}
		else if(expression[i]==')')
		{
			while(!operators.empty() && operators.top()!='(')
			{
				char c=operators.top();
				operators.pop();
				postfix+=c;
			}
			
			if(!operators.empty() && operators.top() != '(')
			cout<< "Invalid Expression";
			else if(operators.top()=='(')
			{
				operators.pop();
			}
		}
		else if(Isoperator(expression[i]))
		{
			while(!operators.empty() && operators.top()!='(' && precedence(expression[i])<= precedence(operators.top()) )
			{
				postfix=postfix+operators.top();
				operators.pop();
			}
			operators.push(expression[i]);
		}
	}
	while(!operators.empty())
	{
		postfix=postfix+operators.top();
		operators.pop();
	}
	cout<<"\nFinal postfix notaion is "<<postfix;
	return 0;
}

int main()
{
	string s;
	getline(cin, s);
	int result = infixtopostfix(s);
	
}
