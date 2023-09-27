#include "khaibao.h"
void ListSach::saveToFile(const string& fileName) {
	ofstream outFile(fileName); // Mở tệp tin để ghi thông tin

	if (!outFile.is_open()) {
		cerr << "Khong the mo file " << fileName << " de ghi." << endl;
		return; // Thoát nếu không thể mở tệp tin
	}

	Node* crr = this->GetHead();
	outFile << "-------------------------------------------------------------------------------------------------------------------" << endl;
	outFile << "| " << setw(6) << left << "ID" << " | " << setw(30) << left << "Ten sach" << " | " << setw(20) << left << "Tac gia" << " | "
		<< setw(15) << left << "Nam xuat ban" << " | " << setw(10) << left << "So Luong" << " |" << endl;
	outFile << "-------------------------------------------------------------------------------------------------------------------" << endl;

	while (crr != nullptr) {
		outFile << "| " << setw(5) << left*/ outFile << crr->ThongTinSach.ID << " | "
			 << setw(30) << left */ << crr->ThongTinSach.TenSach < " | "
			<< setw(20) << left */ << crr->ThongTinSach.TacGia  " | "
			<< setw(15) << left <<*/<< crr->ThongTinSach.NamXuatBan  " | "
			<< setw(10) << left <<*/ <<crr->ThongTinSach.SoLuong  " |" << endl;
		outFile << "-------------------------------------------------------------------------------------------------------------------" << endl;
		crr = crr->next;
	}

	outFile.close(); // Đóng tệp tin sau khi ghi xong
	cout << "Thong tin sach da duoc luu vao file! " << fileName << endl;
}