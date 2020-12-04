#ifndef TESTUTIL_HPP
#define TESTUTIL_HPP

#include <iostream>
#include <iterator>

// Base class template.
template <typename X>
class Test : std::false_type {};

/*********************************************************************
 * @brief Explicit (full) template specialization for class Test,
 *        where typename [X = void].
 * 
 *********************************************************************/
template <>
class Test<void> : std::true_type
{
public:
  int id;                     // id# of currently tested unit.  (not memorized)
  std::string Name;           // name of currently tested unit. (not memorized)
  Test() : id{0}, Name{""} {} // Construct new Test Marker.

  // Print the header the next tested unit.
  void TestHeader()
  {
    ++id;
    std::cout << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl;
    std::cout << "> TEST #" << id << ": " << Name << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl;
  }
};

/*********************************************************************
 * @brief Unit-Test Utility Functions
 *
 *********************************************************************/
// Check if the test passes or fails.
template <typename X>
void pfCheck(bool check, Test<X> &test)
{
  std::cout << "\n......................................................................." << std::endl;
  std::cout << "--OK!--> " << test.Name << std::endl;
  if (check)
  {
    std::cout << "\n\t STATUS: PASSED." << std::endl << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n" << std::endl;
  }
  else
  {
    std::string err_msg = "--\?\?\?--> ERROR! FAILED PASSCHECK ON TEST#" + std::to_string(test.id) + ": " + test.Name + "\n\n";
    throw err_msg;
  }
}

// Exception handling wrapper for each test.
template <typename X>
void errCatch(bool check, Test<X> &test)
{
  try {
    pfCheck(check, test);
  }
  catch (std::string err_msg)
  {
    std::cerr << err_msg << std::endl;
  }
}

#endif