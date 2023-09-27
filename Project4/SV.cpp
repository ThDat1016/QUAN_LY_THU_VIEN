//#include "khaibao.h"
//
//void ListSV::addSv(const string& TenSach, const string& TacGia, int NamXuatBan, const string& tenSV, const string& lop, const string& mssv) {
//	
//	Node* crr = this->GetHead();
//	ListSach list;
//	long cout = 0;
//	while (crr != nullptr && crr->ThongTinSach.TenSach != TenSach && crr->ThongTinSach.TacGia != TacGia && crr->ThongTinSach.NamXuatBan != NamXuatBan) {
//		cout++;
//		crr = crr->next;
//	}
//	if (list.SoLuong > cout) {
//		cout << endl << "Khong ton tai sach da chon!" << endl;
//		return;
//	}
//	if (crr->ThongTinSach.temp == 1) {
//		while (crr != nullptr ) {
//			if (crr->ThongTinSach.TenSach == TenSach && crr->ThongTinSach.TacGia == TacGia && crr->ThongTinSach.NamXuatBan == NamXuatBan && crr->ThongTinSach.temp == 0) {
//				crr->ThongTinSach.temp = 1;
//				//tao 1 doi tuong sinh vien moi
//				SV newSV(tenSV,lop,mssv,TenSach,TacGia,NamXuatBan,crr->ThongTinSach.ID);
//
//			}
//			crr = crr->next;
//		}
//	}
//	
//}
