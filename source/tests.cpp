# define CATCH_CONFIG_RUNNER
# include <catch.hpp>
# include <cmath>
# include <vector>
# include <algorithm>
# include "List.hpp"

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
