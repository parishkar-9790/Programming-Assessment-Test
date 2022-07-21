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
string strip(string str)
{
    ll start = 0, min = 3;
    string newString = "";
    while (start < str.length())
    {
        char c = str[start];
        ll rep = 1;
        while (c == str[start + rep] && start + rep < str.length())
            rep++;
        if (rep < min)
        {
            fx(i, 0, rep)
            {
                newString = newString + c;
            }
        }
        start += rep;
    }
    return newString;
}

int main()
{
    string str = "MNHHHHNNM";
    // manual input
    // string str;
    // cin >> str;
    ll n = str.length();
    while (n--)
    {
        str = strip(str);
    }
    output(str);
    return 0;
}