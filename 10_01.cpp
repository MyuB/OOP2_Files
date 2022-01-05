#include "docWriter.h"
#include "htmlwriter.h"
using namespace std;
// Type Conversion(Casting)
int main() {

	////inheritance already applied
	//DocWriter dw;
	//HTMLWriter hw("inha.html", "객체 간 대입");
	//
	////상속 관계에서의 내리 사랑
	////hw = dw; //자식 객체에 부모 객체 대입 물가
	//dw = hw; //부모 객체에 자식 객체 대입 가능

	////부모 클래스의 멤버 함수인 write가 동작이 되었다
	////자식에 있는 write를 호출 할 수 없다
	//dw.Write();

	//이거의 문제는 부모는 setFont()에 접근 할 수 없기 때문에 오류 발생
	//HTMLWriter* phw = &dw;

	//pointer
	HTMLWriter hw;
	DocWriter* pdw = &hw;
	//이번애는 자식 클래스의 write가 돌아감
	pdw->Write();

	//이번에는 부모 클래스의 write가 돌아감
	//우리는 delegation 했기 때문에 부모 클래스의 write가 돌아간거
	HTMLWriter hw("temp_inha.html", "temp"); //up casting
	DocWriter* pdw = &hw;
	pdw->Write();

	DocWriter dw;

	//reference
	//DocWriter rdw;
	//HTMLWriter& rhw = rdw; 에러 -> 내리사랑
	
	//사실상 포인터랑 똑같이 up casting 되어 동작한다
	HTMLWriter rhw("inha1.html", "객체");
	DocWriter& rdw = rhw;
	rdw.Write();

	//down casting => 예외
	HTMLWriter dhw;
	DocWriter* dpdw = &dhw; //up casting
	HTMLWriter* pdhw = (HTMLWriter*)dpdw; //down casting

	dpdw->Write(); //부모의 write가 수행
	//pdhw->Write(); //이거는 자식의 write가 생성이 된 것
	// 결국 pdhw도 dhw를 참조하고 있는 것

	//원본이 자식이면 up 하고 down하는것은 전혀 문제가 되지 않는다
	//명시적 casting이 꼭 필요하다

	return 0;
}