#include <stdio>

class TestABC {
private:
	uint m_result = 0;
	
public:
	TestABC(){}
	~TestABC(){}
	
	int sum(int a, int b);
}
