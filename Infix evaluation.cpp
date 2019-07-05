#include<bits/stdc++.h>
using namespace std;
int precedence(char c)
{
	if(c=='+' || c=='-')
	return 1;
	if(c=='/' || c== '*')
	return 2;
	if(c=='^')
	return 3;
	return 0;
	
}
bool Isoperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c=='^')
		return true;
	return false;
}
int  performeoperation(char operation,int operand1,int operand2)
{
		if (operation == '+') return operand1 + operand2;
	else if (operation == '-') return operand1 - operand2;
	else if (operation == '*') return operand1 * operand2;
	else if (operation == '/') return operand1 / operand2;
	else if(operation=='^') return pow(operand1,operand2);
	else cout << "\nUnexpected error";
	return -1;
}
bool Isnumericdigit(char c)
{
	if (c >= '0' && c <= '9')
		return true;
	return false;
}
int infixevaluation(string expression)
{
	stack<int> values;
	stack<char> operators;
	for(int i=0;i<expression.length();i++)
	{
		if(expression[i]==' ' || expression[i]==',')
		continue;
		else if(expression[i]=='(')
		{
			operators.push(expression[i]);
		//	cout<<"\nPushed "<<operators.top();
		}
		else if(Isnumericdigit(expression[i]))
		{
			int operand=0;
			while(i<expression.length() && Isnumericdigit(expression[i]))
			{
				operand=operand*10+expression[i]-'0';
				i++;
			}
			i--;
			
		//	cout<<"\nPushed value is ";
			values.push(operand);
		//	cout<<" "<<values.top();
		}
			else if(expression[i]==')')
		{
			//cout<<"\nTHis is )";
			while(!operators.empty() && operators.top()!='(')
			{
				int operand2=values.top();
				values.pop();
				int operand1=values.top();
				values.pop();
				char operatorr=operators.top();
			//	cout<<"\nchar is "<<operatorr;
				operators.pop();
				values.push(performeoperation(operatorr,operand1,operand2));
				//cout<<"\nPerformed operation value "<<values.top();
			}
			operators.pop();
			//	cout<<"\nlast "<<operators.top();
			//	cout<<"\n Came out of )";
		}
		
		else if(Isoperator(expression[i]))
		{
			while(!operators.empty() && precedence(expression[i]) <= precedence(operators.top()) )
			{
				int operand2=values.top();
				values.pop();
				int operand1=values.top();
				values.pop();
				char c=operators.top();
				operators.pop();
				values.push(performeoperation(c,operand1,operand2));
				
			}
			operators.push(expression[i]);
		//	cout<<"\nPushed operand is "<<operators.top();
			
		}
	//cout<<"\nValue of i is "<<i;
	}
//	cout<<"\n for loop finished";
	while(!operators.empty())
		{
			int operand2=values.top();
			//cout<<"\nOperand 2 is "<<operand2;
				values.pop();
				int operand1=values.top();
				//cout<<"\nOperand 1 is "<<operand1;
				values.pop();
				char c=operators.top();
				operators.pop();
				values.push(performeoperation(c,operand1,operand2));
				//cout<<"\nPushed value is "<<values.top();
		}
	return values.top();
}

int main()
{
	string s;
	getline(cin, s);
	int result = infixevaluation(s);
	cout << "\nOutput for this is " << result;
}
