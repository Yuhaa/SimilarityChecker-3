#include "pch.h"
#include "../SimilarityChecker/word.cpp"

TEST(LengthTest, SameLength) {
	Word word;
	int res = 60;
	EXPECT_EQ(60, word.CheckLength());
}