#ifndef TESTRUN_HPP
#define TESTRUN_HPP

/* STLs */
#include <omp.h>
#include <ctime>
#include <chrono>

/* Local Headers */
#include "module/TestUtil.hpp"
#include "module/csvParser.hpp"

namespace karl
{
  using std::cerr;
  using std::cin;
  using std::clog;
  using std::cout;
  using std::endl;
  using std::pair;
  using std::string;
  using std::vector;
} // namespace karl

using namespace karl;

/***********************************************************************************
 * @brief Implementation of the string converter function.
 *
 * @param value
 * @param index
 */
template <typename D>
void csvParser<D>::rawToRealDatum(D &unit, size_t index)
{
  /*
    conversion . . .
    example:  1-column source -> a primitive (int, double, etc. )
              unit = stoi((*database[i])[0]);

   */
}

template <typename D>
D &csvParser<D>::rawToRealDatum(size_t index)
{
  // D *tmp = new D;
  /*
    conversion . . .
   */
  // return *temp;
}

/************************************************************************************
 * @brief Write Test Results into a give file output.
 *
 * @param outpath
 * @param results_to_be_written
 */
template <typename R>
void writeTestResults(const string &outpath, vector<pair<string, R>> &results_to_be_written)
{
  std::fstream outStream;
  outStream.open(outpath, std::ios::out);
  // for (auto i : results_to_be_written)
  // {
  //   outStream << i.first << ": " << std::fixed << i.second << endl;
  // }
  outStream.close();
}

/************************************************************************************
 * @brief Write the test pass/fail results to log file.
 * 
 * @tparam X 
 * @param test_log 
 * @param log_file 
 */
template <typename X>
void write_test_log(vector<pair<Test<X>, bool>> &test_log, std::ofstream &log_file)
{
  auto timestamp_now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
  for (auto i : test_log)
  {
    log_file << i.first.id << "," << i.first.Name << ",";
    if (i.second == true)
      log_file << "passed,";
    else
      log_file << "failed,";
    log_file << ctime(&timestamp_now);
  }
}

#endif
