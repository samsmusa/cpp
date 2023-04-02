#include<iostream>

#include<cmath>

#include<fstream>

using namespace std;
double shiefcheb(double x, double n) {
    if (n == 0) return 1;
    else if (n == 1) return 2 * x - 1;
    else
        return ((4 * x - 2) * shiefcheb(x, n - 1)) - shiefcheb(x, n - 2);
}
int main() {
    ofstream fout("shif.dat");
    for (double i = 0.0; i <= 1.0; i = i + .001) {
        fout << i << "\t" << shiefcheb(i, 1) << "\t" << shiefcheb(i, 2) << "\t" << shiefcheb(i, 3) << "\t" << shiefcheb(i, 4) << endl;
    }
    return 0;
}