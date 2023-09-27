#include "khaibao.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    ListSach list_sach;
    int choice;
    cin.ignore(); // Loại bỏ dấu xuống dòng sau khi đọc lựa chọn.

    while (true) {
        cout << "\nMENU:";
        cout << "\n1. Them Sach";
        cout << "\n2. Danh Sach Cac Cuon Sach(TQ)";
        cout << "\n3. Danh Sach Cac Cuon Sach(CT)";
        cout << "\n4. Tim Kiem Theo Ten";
        cout << "\n5. Ghi File";
        cout << "\n6. Thoat Chuong Trinh";
        cout << "\nNhap lua chon: ";
        cin >> choice;
        cin.ignore(); // Loại bỏ dấu xuống dòng sau khi đọc lựa chọn.

        string tenSach, tacGia;
        int namXuatBan;
        pressAnyKey();
        switch (choice) {
        case 1: {
            cout << "Nhap thong tin sach:" << endl;

            cout << "Ten sach: ";
            getline(cin, tenSach); // Đọc tên sách từ dòng nhập.

            cout << "Tac gia: ";
            getline(cin, tacGia); // Đọc tên tác giả từ dòng nhập.

            cout << "Nam xuat ban: ";
            cin >> namXuatBan; // Đọc năm xuất bản.

            list_sach.addSach(tenSach, tacGia, namXuatBan);
            cout << "Sach da duoc them vao danh sach." << endl;
            pressAnyKey();
            break;
        }
        case 2:
            // In ra thông tin sách đã nhập
            list_sach.PrintSachTQ();
            break;
        case 3:
            list_sach.PrintSach();
            break;
        case 4: {
            cout << "Nhap Ten Sach: ";
            getline(cin, tenSach);
            list_sach.searchBook(tenSach);
            break;
        }
        case 5:
            list_sach.saveToFile("ThongTin.xls");
            cout << "Danh sach da duoc ghi vao file ThongTin.txt." << endl;
            break;
        case 6:
            return 0;
        default:
            cout << "Lua chon khong hop le. Hay nhap lai." << endl;
        }
    }

    return 0;
}