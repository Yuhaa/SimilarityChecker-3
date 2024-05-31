#include <string>

using namespace std;

class Word {
public:
	void SetTarget(string target1, string target2) {
		_target1 = target1;
		_target2 = target2;
	}

	int CheckLength() {
		if (_target1.length() == _target2.length())
			return 60;
		if (_target1.length() > _target2.length() &&
			_target1.length() >= _target2.length() * 2) {
			return 0;
		}
		if (_target1.length() < _target2.length() &&
			_target1.length() * 2 <= _target2.length()) {
			return 0;
		}
	}

private:
	string _target1;
	string _target2;
};