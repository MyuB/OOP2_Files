#include "docWriter.h"
#include "htmlwriter.h"
using namespace std;
// Type Conversion(Casting)
int main() {

	////inheritance already applied
	//DocWriter dw;
	//HTMLWriter hw("inha.html", "��ü �� ����");
	//
	////��� ���迡���� ���� ���
	////hw = dw; //�ڽ� ��ü�� �θ� ��ü ���� ����
	//dw = hw; //�θ� ��ü�� �ڽ� ��ü ���� ����

	////�θ� Ŭ������ ��� �Լ��� write�� ������ �Ǿ���
	////�ڽĿ� �ִ� write�� ȣ�� �� �� ����
	//dw.Write();

	//�̰��� ������ �θ�� setFont()�� ���� �� �� ���� ������ ���� �߻�
	//HTMLWriter* phw = &dw;

	//pointer
	HTMLWriter hw;
	DocWriter* pdw = &hw;
	//�̹��ִ� �ڽ� Ŭ������ write�� ���ư�
	pdw->Write();

	//�̹����� �θ� Ŭ������ write�� ���ư�
	//�츮�� delegation �߱� ������ �θ� Ŭ������ write�� ���ư���
	HTMLWriter hw("temp_inha.html", "temp"); //up casting
	DocWriter* pdw = &hw;
	pdw->Write();

	DocWriter dw;

	//reference
	//DocWriter rdw;
	//HTMLWriter& rhw = rdw; ���� -> �������
	
	//��ǻ� �����Ͷ� �Ȱ��� up casting �Ǿ� �����Ѵ�
	HTMLWriter rhw("inha1.html", "��ü");
	DocWriter& rdw = rhw;
	rdw.Write();

	//down casting => ����
	HTMLWriter dhw;
	DocWriter* dpdw = &dhw; //up casting
	HTMLWriter* pdhw = (HTMLWriter*)dpdw; //down casting

	dpdw->Write(); //�θ��� write�� ����
	//pdhw->Write(); //�̰Ŵ� �ڽ��� write�� ������ �� ��
	// �ᱹ pdhw�� dhw�� �����ϰ� �ִ� ��

	//������ �ڽ��̸� up �ϰ� down�ϴ°��� ���� ������ ���� �ʴ´�
	//����� casting�� �� �ʿ��ϴ�

	return 0;
}