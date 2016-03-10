Reverse String
===============================================================

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

vector<string> split(char* str, char deli=' ')
{
    vector<string> result;
    do {
            char* begin =str;
            while(*str != deli && *str)
                    str++;
            result.push_back(string(begin, str));
    } while(0 != *str++);
    return result;
}

int main()
{
    string str = "This is string";
    temp = split((char*)str.c_str());
    str.clear();

    cout<<"Final Reverse: \n";

    for(int i = temp.size()-1; i>=0; i--) {
      str += temp.at(i)+" ";
    }

    cout<< str <<endl;

    return 0;
}


Scalar Product
===============================================================

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  long long T,n,v1[1000],v2[1000];
  cin >> T;
  for (int t = 1; t <= T; t++) {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    sort(v1,v1+n);
    sort(v2,v2+n);
    long long p = 0;
    for (int i = 0; i < n; i++)
        p += v1[i]*v2[n-i-1];
    cout << "Case #" << t << ": " << p << endl;
  }
  return 0;
}
