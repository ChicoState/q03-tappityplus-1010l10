/**
 * Unit Test suite
 **/

#include <gtest/gtest.h>
#include "tappity.h"

class tappityTest : public ::testing::Test
{
protected:
	tappityTest() {}
	virtual ~tappityTest() {}
	virtual void SetUp() {}
	virtual void TearDown() {}
};

TEST(tappityTest, tappity_plus)
{
	ASSERT_TRUE(true);
	// testing for spaces in the phrase
	//  there is a space at the start of the phrase
	TEST(tappityTest, tappity_plus)
	{
		sentence R("i enjoy computer science");
		string input = " i enjoy computer science";
	}
	// testing for spaces in the phrase
	// there is more spaces in the middle of the phrase
	TEST(tappityTest, tappity_plus)
	{
		sentence R("i enjoy computer science");
		string input = "i enjoy  computer science";
	}
	// testing for special characters
	// dont being tested
	TEST(tappityTest, tappity_plus)
	{
		sentence R("I don't know");
		string input = "I dont know";
	}
	// testing for special characters
	//  specifically capitalized 'i'
	TEST(tappityTest, tappity_plus)
	{
		sentence R("I don't know");
		string input = "i don't know";
	}
	// testing for old school of texting
	TEST(tappityTest, tappity_plus)
	{
		practice obj;
		sentence R("OMG did u c nw Utub video?");
		string input = "OMG did u c nw Utub video ?";
	}
	// texting correctly
	TEST(tappityTest, tappity_plus)
	{
		practice obj;
		sentence R("OMG did u c nw Utub video?");
		string input = "omg did you see new youtube video?";
	}
	TEST(tappityTest, tappity_plus)
	{
		sentence R("new pizza @ chico park");
		string input = "new pizza @ chico ";
	}
	// testing for a very long paragraph
	TEST(tappityTest, tappity_plus)
	{
		sentence R("while scrolling on instagram #lazydogs are much less cooler than #brownfoxes");
		string input = "while scrolling on instagram #lazydogs are much less cooler than #brownfoxes ";
	}
	// testing for the period at the end
	TEST(tappityTest, tappity_plus)
	{
		sentence R("A cats outfit is best accessorized when holding snacks with pink cosmopolitan and friend Chihuahua.");
		string input = "A cats outfit is best accessorized when holding snacks with pink cosmopolitan and friend Chihuahua";
	}
