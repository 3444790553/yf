#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    int n;
    string res[2];
    int x = 0;
    cin >> t;
    int q = t;
    int flag = 1;
    while (t--) {
        cin >> n;
        int i = 0;
        string pan[10000];
        string pp;
        while (n--) {
            cin >> pp;
            if (pp!= "PERFECT") 
                flag = 0;    }


        if (flag == 1)
            res[x] = "MILLION Master";
        else
            res[x] = "NA Noob";
        x++;
        flag = 1;
    }
    int j = 0;
    while (q--) {
        cout << res[j] << endl;

        j++;
    }   return 0;

}