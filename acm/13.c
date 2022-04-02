//#include <iostream>
//#include <cmath>
//#include <iomanip>
//
//using namespace std;
//
//#define PI 3.141592
//
//double jc(int x) {
//    if (x == 0) {
//        return 1;
//    }
//    return x * jc(x - 1);
//}
//
//int main() {
//    double x, e, y, sum;
//    while (cin >> x >> e) {
//        int z = 0;
//        x = x * PI / 180;
//        sum = 0;
//        while (pow(x, z) / jc(z) >= e) {
//            sum += pow(x, z) / jc(z);
//            ++z;
//        }
//        cout << setprecision(3) << sum << endl;
//    }
//}