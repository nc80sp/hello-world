#include <stdio>

class TestABC {
private:
	uint m_result = 0;
	uint m_result2 = 1;
	uint m_result3 = 2;
	
public:
	TestABC(){}
	~TestABC(){}
	
	int sum(int a, int b);
	int getResult(int result) { return m_result; };
	int setResult(int a) { m_result = a; };
}
