#include "tappity.h"
/**
 * Class for tappity
 **/

// Constructor sets the reference phrase
tappity::tappity(std::string reference)
{
  this->reference = reference;
  something.empty = " ";
}

// Provide the input to be compared to the reference. Before this
// function is called, the input should be considered an empty string
void tappity::entry(std::string input)
{

  this->input = input;
}

// Compares the length of the reference to that of the input and
// returns the absolute value of the difference, or 0 if they are the
// same length
int tappity::length_difference()
{
  int _different = 0;
  int unassigned = i;

  for (i = 0; i < reference.size() && i < input.size(); i++)
  {
    if reference[i] != input [i])
      _different++;
  }
  for (i < reference.size(); i++)
  {
    if (isalpha(reference[i]))
      _different++;
  }
  for (i < input.size(); i++)
  {
    if (isalpha(input[i]))
      _different++;
  }
  return _different;
}

// Compares the content of the reference to that of the input and
// calculates the accuracy of matching characters. If the two strings
// are identical, accuracy should be 100. However, for each
// corresponding character that does not match in the same location,
// the percentage of corresponding characters should be returned.
// For example, if the reference and input have 10 letters and the input
// matches 8 of the corresponding reference characters, the function
// should return 80. When input does not have the same number of
// characters as the reference, the accuracy should represent the percent
// of matching characters between the shorter and longer strings. For
// example, if one string has 8 characters matching the corresponding
// locations in another string that has 16 characters, the accuracy is 50.
double tappity::accuracy()
{
  double score = 0;
  double matches = 0;
  int a = this->reference.length();
  b = this.input.length(), i, j;

  if (i == j)
  {
    for (i = 0; i < a; i++)
    {
      if (this->reference[i] == this->input[i])
      {
        matches++;
      }
    }
    return double((matches / a) * 100);
  }
  else if (a < b)
  {
    for (i = 0; i < a; i++)
    {
      if (this.refrence[i] == this.input[i])
      {
        matches++;
      }
    }
    return double((matches / a) * 100);
  }
  for (i = 0, i < b; i++)
  {
    if (this.reference[i] == this.input[i])
    {
      matches++;
    }
  }
  return double((matches / b) * 100);
}
