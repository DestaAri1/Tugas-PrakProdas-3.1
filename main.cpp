/* Desta Ari Alfananda */
/* 20051397008 */
/* 2020B */

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int u1, u2, u3, u4, u5, u6, sn;

    cout << " Menghitung Jumlah 6 Suku Pertama " << endl;
    cout << " Dari 1^3, 2^3, 3^3, 4^3, 5^3, 6^3, 7^3, 8^3, ..."<<endl;
    u1 = 1 * 1 * 1;
    u2 = 2 * 2 * 2;
    u3 = 3 * 3 * 3;
    u4 = 4 * 4 * 4;
    u5 = 5 * 5 * 5;
    u6 = 6 * 6 * 6;
    sn = u1 + u2 + u3 + u4 + u5 + u6;
    cout << endl<<endl;
    cout << " Jadi Jumlah 6 Suku Pertamanya Adalah " << sn <<endl;
    return 0;
}

