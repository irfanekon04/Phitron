#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jerseyNo;
    string country;
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->country = "PajeetLand";
    dhoni->jerseyNo = 69;
    Cricketer *kohli = new Cricketer;
    // kohli = dhoni;
    kohli->country = dhoni->country;
    kohli->jerseyNo = dhoni->jerseyNo;
    delete dhoni;
    cout << kohli->country << " " << kohli->jerseyNo << endl;
    return 0;
}