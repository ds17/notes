#include <iostream>
#include "Sales_item.h"

/*while���*/
//int main()
//{
//	int sum = 0,v=0, v_low = 100, v_high=103;
//	v = v_low;
//	while (v <= v_high) {
//		sum += v;
//		++v;
//	}
//
//	std::cout << "sum of " << v_low << " to " << v_high << " inclusive is " << sum << std::endl;
//	return 0;
//}

/*ex1.11*/ 
//int main()
//{
//	int v1 = 0, v2 = 0;
//	std::cin >> v1 >> v2;
//	int vlow = 0, vhigh = 0;
//	if (v1 > v2) {
//		vlow = v2;
//		vhigh = v1;
//	}
//	else {
//		vlow = v1;
//		vhigh = v2;
//	}
//
//	int vcur = vlow;
//	while (vcur <= vhigh) {
//		std::cout << vcur << std::endl;
//		++vcur;
//	}
//	return 0;
//}

/* for���*/
//int main()
//{
//	int sum = 0;
//	for (int val = 1; val <= 10; ++val)
//		sum += val;
//	std::cout << "sum of -100 to 100 inclusive is " << sum << std::endl;
//	return 0;
//}

/*�ǹ̶�����*/
//int main()
//{
//	int sum = 0, value = 0;
//	while (std::cin >> value)   /*���������std::cin �������״̬�Ƿ���Ч*/
//		sum += value;
//	std::cout << "sum  is " << sum <<std::endl;
//	return 0;
//}

/*��cin��ȡһ�����������˻�*/
//int main()
//{
//	int multi = 1, value = 1;
//	while (std::cin >> value)
//		multi = multi * value;
//	std::cout << "multi is " << multi << std::endl;
//	return 0;
//}

/*if���*/
//int main()
//{
//	int currVal = 0, val = 0;
//	if (std::cin >> currVal) {      //if�� ֻ�ж�һ����״̬
//		int cnt = 1;
//		while (std::cin >> val) {   //�������� while �����ν���
//			if (val == currVal) 
//				++cnt;
//			else {
//				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
//				currVal = val;
//				cnt = 1;
//			}
//		}
//		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
//
//	}
//	return 0;
//}

//int main()
//{
//	Sales_item item1, item2;
//	std::cin >> item1 >> item2;
//	std::cout << item1 + item2 << std::endl;
//	return 0;
//}

/*ex1.22*/
//int main()
//{
//	Sales_item item, sum;
//	std::cin >> sum;
//	while (std::cin >> item) {
//		sum += item;
//	}
//	std::cout << sum << std::endl;
//	return 0;
//}

/*��1.5*/
//int main()
//{
//	Sales_item item1, item2;
//	std::cin >> item1 >> item2;
//	if (item1.isbn() == item2.isbn()) {
//		std::cout << item1 + item2 << std::endl;
//		return 0;
//	}
//	else {
//		std::cerr << "data must refer to same ISBN"
//			<< std::endl;
//		return -1;
//	}
//
//}

/*ex1.23*/
//int main()
//{
//	Sales_item item, cur_val;
//	if (std::cin >> cur_val) {
//		int cnt = 1;
//		while (std::cin >> item) {
//			if (item.isbn() == cur_val.isbn()) {
//				++cnt;
//			}
//			else {
//				std::cout << cur_val.isbn() << " occurs " << cnt << " times " << std::endl;
//				cur_val = item;
//				cnt = 1;
//			}
//		}
//		std::cout << cur_val.isbn() << " occurs " << cnt << " times " << std::endl;
//	}
//	return 0;
//}

/*��1.6*/
int main()
{
	Sales_item total;
	if (std::cin >> total) {   //cin���ζ��뻺���������ݣ���������һ������
		Sales_item trans;
		while (std::cin >> trans) {  //����#154��֮������ݣ��ӻ�����
			if (total.isbn() == trans.isbn()) {
				total += trans;
			}
			else {
				std::cout << total << std::endl;
				total = trans;
			}
		
		}
		std::cout << total << std::endl;
	}
	else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}