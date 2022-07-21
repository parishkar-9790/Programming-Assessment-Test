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
// #TODO: Figure out what to comment here.
/* this solutions also work but there is some bug which wont return the correct address */
// char *substr(char *str, char *sub)
// {

//     ll matches = 0, subSize = 0, count = 0;
//     while (*sub != '\0')
//     {
//         subSize++;
//         sub++;
//     }
//     sub = sub - subSize;
//     while (*str != '\0')
//     {
//         while (*sub == *str && *sub != '\0')
//         {
//             matches++;
//             sub++;
//             str++;
//         }
//         if (matches == subSize)
//         {
//             return str;
//         }
//         matches = 0;
//         str++;
//         count++;
//     }
//     return 0;
// }

char *find(char *s1, char *s2)
{
    char *temp = strstr(s1, s2);
    if (temp)
    {
        return (temp);
    }
    else
    {
        return nullptr;
    }
}

int main()
{
    string main = "heytherestrthisisastring";
    string sub = "str";
    // manual input
    //    string str1;
    //    cin>>str1;
    //    string str2;
    //    cin>>str2;
    char *s1 = &*main.begin();
    char *s2 = &*sub.begin();
    cout << static_cast<void *>(find(s1, s2)) << endl;
    // cout << static_cast<void *>(substr(s1, s2)) << endl;

    return 0;
}