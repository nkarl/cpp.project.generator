#include "unit_xxxx.hpp"

bool run_unit_xxxx() {
  static Test<void> thisTest;
  static bool allPassed;
  const string path_to_logfile = "test_log/unit_xxxx.txt";
  static vector<pair<Test<void>, bool>> test_log;

  /*******************************************************************************/
  thisTest.Name = "INIT OUTPUT";
  thisTest.TestHeader();
  /*******************************************************************************/
  /* PRE-TEST REQUIREMENT */

  /* TEST_BODY STARTS BELOW */
  allPassed = []() -> bool {
    string initString = "THIS IS A TEST STRING.\n";
    cout << initString;
    return (initString.at(0) == 'T') ? true : false;
  }();
  /* TEST_BODY ENDS. */

  /* POST-TEST: ERROR CHECKING & LOGGING */
  errCatch(allPassed, thisTest);
  test_log.push_back(std::make_pair(thisTest, allPassed));

  /*******************************************************************************/
  thisTest.Name = "REPLACE THIS TEXT WITH NAME OF TEST";
  thisTest.TestHeader();
  /*******************************************************************************/
  /* PRE-TEST REQUIREMENT */

  /* TEST_BODY STARTS BELOW */
  allPassed = []() -> bool {
    /*
        PUT TEST CONTENT HERE.
     */
    /*
        - Remember to add reference symbol '&' to the lambda function [&]()
          if any objects from the outside-scope are used.
        - Always return a boolean type at the end.
     */
  }();
  /* TEST_BODY ENDS. */

  /* POST-TEST: ERROR CHECKING & LOGGING */
  errCatch(allPassed, thisTest);
  test_log.push_back(std::make_pair(thisTest, allPassed));

  /*******************************************************************************/
  thisTest.Name = "REPLACE THIS TEXT WITH NAME OF TEST";
  thisTest.TestHeader();
  /*******************************************************************************/
  /* PRE-TEST REQUIREMENT */

  /* TEST_BODY STARTS BELOW */
  allPassed = []() -> bool {
    /*
        PUT TEST CONTENT HERE.
     */
    /*
        - Remember to add reference symbol '&' to the lambda function [&]()
          if any outside-scope objects are used.
        - Always return a boolean type at the end.
     */
  }();
  /* TEST_BODY ENDS. */

  /* POST-TEST: ERROR CHECKING & LOGGING */
  errCatch(allPassed, thisTest);
  test_log.push_back(std::make_pair(thisTest, allPassed));

  /* WRITE TEST LOG TO FILE */
  // std::ofstream log_output;
  // log_output.open(path_to_logfile);
  // write_test_log(test_log, log_output);

  return allPassed;
}
