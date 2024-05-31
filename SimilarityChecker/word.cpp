#include <string>

using namespace std;

class Word {
public:
	const int MAX_LENGTH_SCORE = 60;

	void SetTarget(string target1, string target2) {
		_target1 = target1;
		_target2 = target2;
	}

	double CheckLength() {
		double length1 = _target1.length();
		double length2 = _target2.length();

		if (length1 == length2)
			return 60;
		if (length1 > length2 &&
			length1 >= length2 * 2) {
			return 0;
		}
		if (length1 < length2 &&
			length1 * 2 <= length2) {
			return 0;
		}
		if (length1 > length2) {
			return (1 - (length1 - length2) / length2) * MAX_LENGTH_SCORE;
		}
		if (length2 > length1) {
			return (1 - (length2 - length1) / length1) * MAX_LENGTH_SCORE;
		}
	}

private:
	string _target1;
	string _target2;
};