#include <string>
#include <cstdlib>

using namespace std;

class Word {
public:
	const int MAX_LENGTH_SCORE = 60;

	void SetTarget(string target1, string target2) {
		_target1 = target1;
		_target2 = target2;
	}

	bool IsSameLength() {
		return _target1.length() == _target2.length();
	}

	bool IsDoubleLength() {
		return (_target1.length() >= _target2.length() * 2 ||
			_target2.length() >= _target1.length() * 2);
	}

	double GetSubScore() {
		double difference = abs((double)_target1.length() - (double)_target2.length());
		return (1 - difference / (double)min(_target1.length(), _target2.length())) * MAX_LENGTH_SCORE;
	}

	double CheckLength() {
		double length1 = _target1.length();
		double length2 = _target2.length();

		if (IsSameLength())
			return 60;

		if (IsDoubleLength())
			return 0;
		
		return GetSubScore();
	}

private:
	string _target1;
	string _target2;
};