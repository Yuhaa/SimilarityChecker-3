#include "pch.h"
#include "../SimilarityChecker/word.cpp"

class WordFixture: public testing::Test {
public:
	Word word;
};

TEST_F(WordFixture, SameLength) {
	word.SetTarget("abcd", "abcd");
	int res = 60;

	EXPECT_EQ(res, word.CheckLength());
}

TEST_F(WordFixture, TwiceLength1) {
	word.SetTarget("abcd", "abcdefgh");
	int res = 0;

	EXPECT_EQ(res, word.CheckLength());
}

TEST_F(WordFixture, TwiceLength2) {
	word.SetTarget("abcdefgh", "abcd");
	int res = 0;

	EXPECT_EQ(res, word.CheckLength());
}

TEST_F(WordFixture, TwiceLength3) {
	word.SetTarget("abcdefghsdf", "abcd");
	int res = 0;

	EXPECT_EQ(res, word.CheckLength());
}