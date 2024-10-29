#include <bits/stdc++.h>
using namespace std;
using i128 = __int128;
const i128 I128_MAX = numeric_limits<__int128>::max();
ostream& operator<<(ostream& os, i128 value) {
    if (value < 0) {
        os << '-';
        value = -value;
    }
    if (value >= 10) {
        os << (value / 10);
    }
    os << static_cast<char>('0' + (value % 10));
    return os;
}
istream& operator>>(istream& is, i128& value) {
    string input;
    is >> input;
    try {
        size_t pos;
        value = stoll(input, &pos);
        if (pos != input.size()) {
            throw invalid_argument("Invalid input");
        }
    } catch (const invalid_argument& e) {
        is.setstate(ios::failbit);
    }
    return is;
}
int main(){
	i128 a, b, c, k;
	cin >> a >> b >> c >> k;
	i128 c2,c1,c0;
	c2 = 4*(a+b+c-6);
    c1 = 2*((a-2)*(b-2)+(a-2)*(c-2)+(b-2)*(c-2));
    c0 = a*b*c-k-c2-c1-8;
	cout << "0 0 0 8 " <<c2<< " " <<c1<< " " <<c0<< endl;
	return 0;
}