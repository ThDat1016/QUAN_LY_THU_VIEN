#include "khaibao.h"

void ListSach::addSach(const string& TenSach, const string& TacGia, int NamXuatBan) {
	Node* crr = this->GetHead();

	// Kiểm tra xem cuốn sách đã tồn tại trong danh sách chưa
	/*
	
	while (crr != nullptr) {
		if (TenSach == crr->ThongTinSach.TenSach && TacGia == crr->ThongTinSach.TacGia && NamXuatBan == crr->ThongTinSach.NamXuatBan) {
			// Sách đã tồn tại, tăng số lượng
			crr->ThongTinSach.SoLuong += 1;
			Sach newSach(TenSach, TacGia, NamXuatBan);
			int id = newSach.randomId();
			return;
		}
		crr = crr->next;
	}
	*/
	// Tạo đối tượng sách mới với thông tin từ tham số
	Sach newSach(TenSach, TacGia, NamXuatBan);
	int id = newSach.randomId();
	newSach.SoLuong += 1;

	// Tạo một bản sao của tên sách để đảm bảo không thay đổi dữ liệu gốc
	string TenSachCopy = TenSach;

	// Lưu thông tin vào node mới
	Node* newNode = new Node(newSach);
	if (!head) {
		head = newNode;
		tail = newNode;
	}
	else {
		tail->next = newNode;
		tail = newNode;
	}
}

void ListSach::PrintSachTQ() {
	Node* crr = this->GetHead();
	// Kiểm tra xem danh sách có sách nào không
	if (!crr) {
		cout << "Danh sach sach trong." << endl;
		return;
	}
	
		cout << "---------------------------------------------------------------------------" << endl;
		cout << "| " << setw(30) << left << "Ten sach" << " | " << setw(20) << left << "Tac gia" << " | "
			<< setw(15) << left << "Nam xuat ban" << " | " << setw(10) << left <<endl;
		cout << "---------------------------------------------------------------------------" << endl;
		set<string> printedBooks;
		while(crr!=nullptr){

			string bookKey = crr->ThongTinSach.TenSach + crr->ThongTinSach.TacGia + to_string(crr->ThongTinSach.NamXuatBan);

			// Kiểm tra xem cuốn sách đã được in trước đó chưa
			if (printedBooks.find(bookKey) == printedBooks.end()) {
					cout<<"| " << setw(30) << left << crr->ThongTinSach.TenSach << " | "
					<< setw(20) << left << crr->ThongTinSach.TacGia << " | "
					<< setw(15) << left << crr->ThongTinSach.NamXuatBan << " | " << endl;
					cout << "---------------------------------------------------------------------------" << endl;
				// Đánh dấu cuốn sách đã được in
				printedBooks.insert(bookKey);
			}
					crr = crr->next;
		}
	
	return;
}
void ListSach::PrintSach() {
	Node* crr = this->GetHead();
	if (!crr) {
		cout << "Danh sach sach trong." << endl;
		return;
	}

	cout << "------------------------------------------------------------------------------------" << endl;
	cout << "| " << setw(6) << left << "ID" << " | " << setw(30) << left << "Ten sach" << " | "
		<< setw(20) << left << "Tac gia" << " | " << setw(15) << left << "Nam xuat ban" << " | " << endl;
	cout << "------------------------------------------------------------------------------------" << endl;

	while (crr != nullptr) {
			cout << "| " << setw(6) << left << crr->ThongTinSach.ID << " | "
				<< setw(30) << left << crr->ThongTinSach.TenSach << " | "
				<< setw(20) << left << crr->ThongTinSach.TacGia << " | "
				<< setw(15) << left << crr->ThongTinSach.NamXuatBan << " | " << endl;
			cout << "------------------------------------------------------------------------------------" << endl;
		crr = crr->next;
	}

}

void ListSach::searchBook(const string& TenSach) {
	if (this->GetHead() == nullptr) {
		cout << "\nKhong Co Cuon Sach Nao";
		return;
	}
	cout << "-------------------------------------------------------------------------------------------------" << endl;
			cout << "| " << setw(6) << left << "ID" << " | " << setw(30) << left << "Ten sach" << " | " << setw(20) << left << "Tac gia" << " | "
				<< setw(15) << left << "Nam xuat ban" << " | " << setw(10) << left << "So Luong" << " |" << endl;
			cout << "-------------------------------------------------------------------------------------------------" << endl;
			Node* crr = this->GetHead();

			while (crr != nullptr && TenSach == crr->ThongTinSach.TenSach) {
				cout << "| " << setw(5) << left << crr->ThongTinSach.ID << " | "
					<< setw(30) << left << crr->ThongTinSach.TenSach << " | "
					<< setw(20) << left << crr->ThongTinSach.TacGia << " | "
					<< setw(15) << left << crr->ThongTinSach.NamXuatBan << " | "
					<< setw(10) << left << crr->ThongTinSach.SoLuong << " |" << endl;
				cout << "-------------------------------------------------------------------------------------------------" << endl;
				crr = crr->next;
			}
		
	return;
}
long ListSach::SoLuong() {
	Node* crr = head;
	int cout = 0;
	while (crr != nullptr) {
		cout++;
		crr = crr->next;
	}
	return cout;
}