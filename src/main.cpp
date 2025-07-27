#include <fstream>
#include <iostream>
#include <print>
#include <config.hpp>

int main() {
  std::println("Hello world from {} {}!", config::name, config::version);
  std::println("Using external data:");
  std::fstream fs{config::path::program_data() / "message.txt"};
  while (true) {
    int in = fs.get();
    if (in == -1) break;
    std::cout.put(in);
  }
}
