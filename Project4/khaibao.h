#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <functional>
#include<random>
#include<set>
using namespace std;


class Sach {
public:
	string TenSach, TacGia;
	int NamXuatBan, SoLuong;
	int ID, temp;
	Sach(const string& TenSach, const string& TacGia, int NamXuatBan) {
		this->NamXuatBan = NamXuatBan;
		this->SoLuong = 0;
		this->TacGia = TacGia;
		this->TenSach = TenSach;
		this->ID = randomId();
		this->temp = 0;// bien danh dau xem sach da duoc cho muon hay chua
	}
	int randomId() const {
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<int> dis(100000, 999999);
		return dis(gen);
	}
};
class Node {
public:
	Sach ThongTinSach;
	Node* next;
	Node(Sach& ThongTinSach) : ThongTinSach(ThongTinSach), next(nullptr) {}
};
class ListSach {
private:
	Node* head = nullptr;
	Node* tail = nullptr;
public:
	void addSach(const string& TenSach, const string& TacGia, int NamXuatBan);
	Node* GetHead() const {
		return head;
	}
	void SetHead(Node* crr) {
		head = crr;
	}

	void PrintSachTQ();
	void PrintSach();
	//void sort_AZ(); // sap xep chu cai
	void searchBook(const string& TenSach);
	void GetSachID(const string& TenSach, const string& TacGia, int NamXuatBan);
	//void deleteBook();
	void saveToFile(const string& filename);
	long SoLuong();
};

//class NodeSv; // Forward declaration of NodeSv
//
//class SV {
//private:
//    string MSSV;
//	string TenSv, Lop, sachMuon, tacgia;
//	int NXB, idSach;
//public:
//    
//    SV(const string& TenSv, const string& Lop, const string& MSSV, const string& sachMuon, const string& tacgia, int NXB, int idSach) {
//        this->Lop = Lop;
//        this->MSSV = MSSV;
//        this->TenSv = TenSv;
//		this->sachMuon = sachMuon;
//		this->tacgia = tacgia;
//		this->NXB = NXB;
//		this->idSach = idSach;
//    }
//    string GetMSSV() const { // Changed return type to string
//        return MSSV;
//    }
//    void SetMSSV(const string& newMSSV) { // Changed parameter type to const string&
//        MSSV = newMSSV;
//    }
//};
//
//class NodeSv {
//public:
//    SV ThongTinSV;
//    NodeSv* nextSv;
//
//    NodeSv(SV& ThongTinSV) : ThongTinSV(ThongTinSV), nextSv(nullptr) {}
//};
//
//class ListSV {
//private:
//    NodeSv* headSv = nullptr;
//    NodeSv* tailSv = nullptr;
//
//public:
//	Node* GetHeadSv() {
//		return headSv;
//	}
//	void SetHeadSv(NodeSv* head) {
//		headSv = head;
//	}
//	void addSv(const string& TenSach, const string& TacGia, int NamXuatBan, const string& tenSV, const string& lop, const string& mssv);
//	void TraSach(const string& mssv, const string& TrinhTrang);
//};

void pressAnyKey();
void saveToFile(const string & fileName); 
