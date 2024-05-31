#include <string>

using namespace std;

class Word {
public:
	int CheckLength(string target1, string target2) {
		if (target1.length() == target2.length())
			return 60;
		if (target1.length() > target2.length() &&
			target1.length() >= target2.length() * 2) {
			return 0;
		}
		if (target1.length() < target2.length() &&
			target1.length() * 2 <= target2.length()) {
			return 0;
		}
	}
};