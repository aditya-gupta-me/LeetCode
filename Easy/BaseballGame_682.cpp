#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int calPoints(vector<string> &op)
{
    stack<int> st;

    int sum = 0;

    for (int i = 0; i < op.size(); i++)
    {
        if (op[i] != "+" && op[i] != "D" && op[i] != "C")
        {
            st.push(stoi(op[i]));
        }
        else if (op[i] == "+")
        {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.push(first);
            int newScore = first + second;
            st.push(newScore);
        }

        else if (op[i] == "D")
        {
            int doubleScore = st.top() * 2;
            st.push(doubleScore);
        }
        else
        {
            st.pop();
        }
    }

    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }

    return sum;
}

int main()
{
    // 'x' -> new integer
    // 'D' -> double the prev score and store the new value
    // '+' -> sum of prev two value and store the new value
    // 'C' -> pop
    vector<string> s = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    int result = calPoints(s);
    cout << result << endl;
    return 0;
}