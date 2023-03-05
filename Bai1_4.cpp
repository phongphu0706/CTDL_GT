//Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong mặt phẳng Oxyz và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này

#include <iostream>
#include <conio.h>

using namespace std;

struct Point {
    double x;
    double y;
    double z;
};

void NhapDiem(Point& p) {
    cout << "Nhap toa do x: ";
    cin >> p.x;
    cout << "Nhap toa do y: ";
    cin >> p.y;
    cout << "Nhap toa do z: ";
    cin >> p.z;

}

void XuatDiem(const Point& p) {
    cout << "(" << p.x << ", " << p.y << "," << p.z << ")" << endl;
}

int main(){
    Point p;

    NhapDiem(p);
    XuatDiem(p);

    getch();
    return 0;
}
