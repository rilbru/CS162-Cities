#include "cities.h"

int main(){
  
  cities west_coast;
  west_coast.add_city("Portland");
  west_coast.add_city("Seattle") ;
  west_coast.add_city("Bozeman");

  west_coast.print_city_info();
 
  bool flag = west_coast.find_city("B");
  if(flag){
    cout<<"City found"<<endl;
  } 
  else{
    cout<<"City not found"<<endl;
  }

  return 0;

}