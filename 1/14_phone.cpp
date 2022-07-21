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
// charge time 1.25 per minute for 0,10
// charge tome 7.33 per minute for 11,to 55
int main()
{
    ll a, b, m = 0;
    cin >> a >> b;
    float c = a;
    fx(i, a, b)
    {
        if (i <= 10)
        {
            c = c + 1.25;
            i = c;
        }
        else
        {
            c = c + 7.33;
            i = c;
        }
        m++;
    }
    cout << "total charge: " << c << " charged upto:  " << c - a << " minutes: " << m << endl;
    return 0;
}