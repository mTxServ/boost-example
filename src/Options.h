#include <boost/program_options.hpp>
#include <sstream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <iostream>

class Options
{
  public:
      bool parse(int argc, char** argv);

  private:
      std::string basename_(const std::string& p);
      std::vector<std::string> get_unlimited_positional_args_(const boost::program_options::positional_options_description& p);
      std::string make_usage_string_(const std::string& program_name, const boost::program_options::options_description& desc, boost::program_options::positional_options_description& p);

  public:
      std::string fname;
      double threshold;
      bool negate_threshold;
};
