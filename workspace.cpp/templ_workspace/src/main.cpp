#include "unit_xxxx.hpp"

void run_finalCheck(bool finalCheck);
int main()
{
  /* Start of Test: */
  bool finalCheck;

  finalCheck = run_unit_xxxx();

  run_finalCheck(finalCheck);
  /* End of Test. */

  return 0;
}

void run_finalCheck(bool finalCheck) {
  if (finalCheck)
  {
    std::cout << std::endl;
    std::cout << "***********************************************************************" << std::endl;
    std::cout << "***********************************************************************" << std::endl;
    std::cout << "--OK!--> ALL PASSED. END OF TEST RUN." << std::endl << std::endl;
  }
  else {
    throw std::out_of_range("TEST: INCOMPLETE. ABORTED.");
  }
}