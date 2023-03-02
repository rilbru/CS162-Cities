#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class cities{
 
 private:
  struct city{
   string city_name;
   city* next_city;
  };

  city* head = nullptr;
  city* current = nullptr;

 public:
  void add_city(string);
  bool find_city(string);
  void print_city_info();

};