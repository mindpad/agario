#include <iostream>
#include <string>

#include <application.hpp>

using namespace std;

int main() {
  // Use RAII principle for application.
  // Construct, initialize, execute and automatically destroy.
  application app{1000, 800};
  app.execute();
}
