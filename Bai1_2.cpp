//Hãy khai báo kiểu dữ liệu biểu diễn khái niệm hỗn số trong toán học và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
#include <iostream>
#include<conio.h>

using namespace std;

struct HonSo {
    int nguyen;
    int tu;
    int mau;
};

void nhapHonSo(HonSo &hs) {
    cout << "Nhap phan nguyen: ";
    cin >> hs.nguyen;
    cout << "Nhap tu so: ";
    cin >> hs.tu;
    do
    {
        cout << "\nNhap vao mau so: ";
        cin >> hs.mau;

        if(hs.mau == 0)
        {
            cout <<"\nMau so phai khac 0. Xin kiem tra lai !";
        }
    }while(hs.mau == 0);
}

void xuatHonSo(HonSo hs) {
    cout << hs.nguyen << " " << hs.tu << "/" << hs.mau;
}

int main(){
    HonSo hs;

    nhapHonSo(hs);
    xuatHonSo(hs);

    getch();
    return 0;
}