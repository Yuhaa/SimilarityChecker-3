#include "pch.h"
#include "../SimilarityChecker/word.cpp"
#include <iostream>

class WordFixture: public testing::Test {
public:
	Word word;
};

TEST_F(WordFixture, SameLength) {
	word.SetTarget("abcd", "abcd");
	double res = 60;

	EXPECT_EQ(res, word.CheckLength());
}

TEST_F(WordFixture, TwiceLength1) {
	word.SetTarget("abcd", "abcdefgh");
	double res = 0;

	EXPECT_EQ(res, word.CheckLength());
}

TEST_F(WordFixture, TwiceLength2) {
	word.SetTarget("abcdefgh", "abcd");
	double res = 0;

	EXPECT_EQ(res, word.CheckLength());
}

TEST_F(WordFixture, TwiceLength3) {
	word.SetTarget("abcdefghsdf", "abcd");
	double res = 0;

	EXPECT_EQ(res, word.CheckLength());
}

TEST_F(WordFixture, DifferentLength1) {
	word.SetTarget("abcdefg", "abcd");
	double res = (1 - double(7 - 4) / 4) * 60;

	EXPECT_EQ(res, word.CheckLength());
}

TEST_F(WordFixture, DifferentLength2) {
	word.SetTarget("abcd", "abcdefg");
	double res = (1 - double(7 - 4) / 4) * 60;

	EXPECT_EQ(res, word.CheckLength());
}