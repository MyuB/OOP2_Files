//익명이면 다른 파일에 사용 불가
//namespace {
//	int g;
//}
//void Func() {
//	g = 5;
//}

namespace this_name_space_has_a_very_long_name {
	namespace User {
		int number;
	}
}

namespace Data = this_name_space_has_a_very_long_name;
int main() {
	int user_no = Data::User::number;

	return 0;
}