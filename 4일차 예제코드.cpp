#include <iostream>

#include <vector>
#include <algorithm>
#include <functional>

//for_each와 비슷한 거 만들어 보기 
//foreach2 고차함수 함수(f)를 파라미터로 받음 
void foreach2(vector<int>::iterator b, vector<int>::iterator e, functiona<void(int v)> f) {
	while(b != e) {
		f(*b);
		b++;
		
	}
} 


int main() {
	
	auto f = []()->void {std::out << "hello world!"};
	f();
	
	std::vector<int> vecs = {1, 2, 3, 4, 5};
	
	// for_each는 키워드 아니다. STL이다. 
	for_each(vecs.begin(), vecs.end(), [](int v)->void {
		std::out << v << endl;
	});
	
	for(int i = 0; i < vecs.size(); i++) {
		std::cout << vecs[i] << endl;
	}
	
	
	for(auto v : vecs) {
		std::out << v << endl;
	}
	
	foreach2(vecs.begin(), vecs.end(), [](int v)->void {
		std::out << v << endl;
	});
	
	int k = 10;
	foreach2(vecs.begin(), vecs.end(), [k](int v)->void {	//클로저로 환경을...  
		
		std::out << k + v << endl;
	});
	
	return 0;
}
