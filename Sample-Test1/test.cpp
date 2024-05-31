#include "pch.h"
#include "../SimilarityChecker/word.cpp"

TEST(LengthTest, SameLength) {
	Word word;
	string target1{"abcd"};
	string target2{"abcd"};
	int res = 60;

	EXPECT_EQ(res, word.CheckLength(target1, target2));
}

TEST(LengthTest, TwiceLength1) {
	Word word;
	string target1{ "abcd" };
	string target2{ "abcdefgh" };
	int res = 0;

	EXPECT_EQ(res, word.CheckLength(target1, target2));
}

TEST(LengthTest, TwiceLength2) {
	Word word;
	string target1{ "abcdefgh" };
	string target2{ "abcd" };
	int res = 0;

	EXPECT_EQ(res, word.CheckLength(target1, target2));
}

TEST(LengthTest, TwiceLength3) {
	Word word;
	string target1{ "abcdefghsdf" };
	string target2{ "abcd" };
	int res = 0;

	EXPECT_EQ(res, word.CheckLength(target1, target2));
}