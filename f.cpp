#include<bits/stdc++.h>
#include<stack>
using namespace std;

bool IsOperand(char ch)
{
if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
return true;
}
return false;
}

bool IsOperator(char C)
{
if (C == '+' || C == '-' || C == '*' || C == '/' || C == '^') {
return true;
}
return false;
}
bool IsLeftParenthesis(char ch)
{
if (ch == '(') {
return true;
}
return false;
}

bool IsRightParenthesis(char ch)
{
if (ch == ')') {
return true;
}
return false;
}

bool Flag(char ch)
{
if (!IsOperand(ch) || !IsOperator(ch) || !IsLeftParenthesis(ch) || !IsRightParenthesis(ch)) {
return false;
}
return true;
}

int IsRightAssociative(char op)
{
if (op == '^') {
return true;
}
return false;
}

int GetOperatorWeight(char op)
{
int weight = -1;
switch (op) {
case '+':
case '-':
weight = 1;
break;
case '*':
case '/':
weight = 2;
break;
case '^':
weight = 3;
break;
}
return weight;
}

bool HasHigherPrecedence(char op1, char op2)
{
int op1Weight = GetOperatorWeight(op1);
int op2Weight = GetOperatorWeight(op2);

// If operators have equal precedence, return true if they are left associative.
// BUT REMEMBER...return false, if right associative.
// if operator is left-associative, left one should be given priority.
if (op1Weight == op2Weight) {
    if (IsRightAssociative(op1)) {
        return false;
    }
    else {
        return true;
    }
}
return op1Weight > op2Weight ? true : false;
}

string InfixToPostfix(string expression)
{
stack<char> S;
string postfix = "";
for (auto& elem : expression) {
if (Flag(elem)) {
continue;
}
// If character is operator, pop two elements from stack, perform operation and push the result back.
else if (IsOperator(elem)) {
while (!S.empty() && S.top() != '(' && HasHigherPrecedence(S.top(), elem)) {
postfix += S.top();
S.pop();
}
S.push(elem);
}
else if (IsOperand(elem)) {
postfix += elem;
}
else if (elem == '(') {
S.push(elem);
}
else if (elem == ')') {
while (!S.empty() && S.top() != '(') {
postfix += S.top();
S.pop();
}
S.pop();
}
}

while (!S.empty()) {
    postfix += S.top();
    S.pop();
}

return postfix;
}

int main()
{
// std::string expression = "5_4/(5^2)+(6^2^3)";
std::string expression = "a*b-a*b+a*b";
std::string postfix = InfixToPostfix(expression);
std::cout << "Output = " << postfix << "\n";
}
