#include<bits/stdc++.h>
using namespace std;
int postfixevaluation(string expression);// function for procedure
int performoperations(char operation, int operand1, int operand2);// calculate related value
bool Isoperator(char c);// check wheather given char is operator +-*/
bool Isnumericdigit(char c);// check wheather it is number or not
int performoperations(char operation, int operand1, int operand2)
{
	if (operation == '+') return operand1 + operand2;
	else if (operation == '-') return operand1 - operand2;
	else if (operation == '*') return operand1 * operand2;
	else if (operation == '/') return operand1 / operand2;
	else cout << "\nUnexpected error";
	return -1;
}
bool Isoperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}
bool Isnumericdigit(char c)
{
	if (c >= '0' && c <= '9')
		return true;
	return false;
}

int postfixevaluation(string expression)
{
	stack<int> s;
	for (int i = expression.length()-1;i >=0; i--)
	{
		if (expression[i] == ' ' || expression[i] == ',')
			continue;
		else if (Isoperator(expression[i]))
		{
			int operand1 = s.top(); s.pop();
			int operand2 = s.top(); s.pop();
			int result = performoperations(expression[i], operand1, operand2);
			s.push(result);
		}
		else if (Isnumericdigit(expression[i]))
		{
			int operand = 0;
			while (i < expression.length() && Isnumericdigit(expression[i]))
			{

				operand = (operand * 10) + (expression[i] - '0');
				i++;
			}
			i--;
			s.push(operand);
		}

	}
	return s.top();
}

int main()

{
	string s;
	getline(cin, s);
	int result = postfixevaluation(s);
	cout << "\nOutput for this is " << result;

}
