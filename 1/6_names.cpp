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
#define fcx(i, x, n) for (char i = x; i < n; i++)
// #TODO: Figure out what to comment here. //

int main()
{
    ll n;
    cin >> n;
    string names[n];
    fx(i, 0, n)
    {
        cin >> names[i];
    }
    output("");
    fcx(i, 'A', 'Z')
    {
        fx(j, 0, n)
        {
            if (names[j][0] == i)
                output(names[j]);
        }
    }
    return 0;
}