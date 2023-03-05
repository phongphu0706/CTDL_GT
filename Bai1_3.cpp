//Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này

#include <iostream>
#include <conio.h>

using namespace std;

struct Point {
    double x;
    double y;
};

void NhapDiem(Point& p) {
    cout << "Nhap toa do x: ";
    cin >> p.x;
    cout << "Nhap toa do y: ";
    cin >> p.y;
}

void XuatDiem(const Point& p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main(){
    Point p;

    NhapDiem(p);
    XuatDiem(p);

    getch();
    return 0;
}
