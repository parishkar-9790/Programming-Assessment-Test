// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
typedef pair<int, int> intp;
typedef map<int, int> maps;
typedef unordered_map<string, int> dictsi;
typedef unordered_map<int, string> dictis;
typedef unordered_map<int, int> dictii;
typedef unordered_map<string, int> browser; // defination for the browser unordered map
#define intj ::iterator
#define var auto
#define clktime() chrono::high_resolution_clock::now()
#define sysclock std::chrono::time_point<std::chrono::system_clock>
#define calctime(x) chrono::duration<float> x
#define fastoutput(x) printf(x)
#define input(x) std::cin >> x
#define output(x) std::cout << x << std::endl
#define calcsize(x) sizeof(x) / sizeof(x[0])
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
#define fx(i, x, n) for (long long i = x; i < n; i++)
// #TODO: Figure out what to comment here. //
string current = "";
stack<string> forStack;
stack<string> backStack;

void GOTO()
{
    if (current == "")
        cin >> current;
    forStack.push(current);
    cout << current << endl;
}

void FORWARD()
{
    if (forStack.empty())
        cout << "HOME" << endl;
    else if (current == forStack.top())
        cout << current << endl;
    else
    {
        backStack.push(current);
        current = forStack.top();
        forStack.pop();
        cout << current << endl;
    }
}

void BACKWARD()
{
    if (backStack.empty())
        cout << "HOME" << endl;
    else if (current == backStack.top())
        cout << current << endl;
    else
    {
        forStack.push(current);
        current = backStack.top();
        backStack.pop();
        cout << current << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    string command;
    using com = void (*)(string);
    map<string, com> funcMap;
    funcMap["goto"] = reinterpret_cast<void (*)(basic_string<char>)>(&GOTO);
    funcMap["forward"] = reinterpret_cast<void (*)(basic_string<char>)>(&FORWARD);
    funcMap["backward"] = reinterpret_cast<void (*)(basic_string<char>)>(&BACKWARD);
    for (int i = 0; i < t; i++)
    {
        cin >> command;
        com f = funcMap[command];
        (*f)(command);
    }
    return 1;
}