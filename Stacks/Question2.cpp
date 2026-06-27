// Implement Stack using queue (Leetcode----->>> 225)

#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    queue<int> q;

    MyStack()
    {
    }

    void push(int x)
    {
        int s = (int)q.size();
        q.push(x);
        for (int i = 1; i <= s; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop()
    {
        int val = q.front();
        q.pop();
        return val;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};