#include <bits/stdc++.h>
using namespace std;
const double phi = 3.1416;

double distance(int x1, int y1, int x2, int y2){
    double jarak = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return jarak;
}

double radius(int x1, int y1, int x2, int y2){
    return distance(x1, y1, x2, y2);
}

double circum(double r){
    double keliling = 2 * phi * r;
    return keliling;
}

double area(double r){
    double luas = phi * pow(r, 2);
    return luas;
}

int main(){
int x1, y1, x2, y2;
cout << "Masukkan nilai titik pusat lingkaran (x1,y1): "; cin >> x1 >> y1;
cout << "Masukkan nilai titik pada lingkaran (x2,y2): "; cin >> x2 >> y2;

double jarak = distance(x1, y1, x2, y2);
double jari_jari = radius(x1, y1, x2, y2);
double keliling = circum(jari_jari);
double luas = area(jari_jari);

cout << "Jarak antara titik pusat dan titik pada lingkaran: " << jarak << endl;
cout << "Jari-jari lingkaran: " << jari_jari << endl;
cout << "Keliling lingkaran: " << keliling << endl;
cout << "Luas lingkaran: " << luas << endl;
}
