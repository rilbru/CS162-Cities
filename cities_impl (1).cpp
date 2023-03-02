#include "cities.h"

void cities::add_city(string ncity){

  city* add_city = new city;
  add_city->city_name = ncity;
  add_city->next_city = nullptr;

  if(head == nullptr){
    head = add_city;
    current = head;
  }
  else{
    current->next_city = add_city;
    current = add_city;
  }
}

bool cities::find_city(string city){

  current = head;

  while(current != nullptr){
    if(current->next_city->next_city == nullptr){
      return true;
    }
    else if(current->next_city->city_name == city){
      return false;
    }
    else{
      current = current->next_city;
    }
   }
  return false;
}

void cities::print_city_info(){
  for(current=head;current!=nullptr; 
  	current=current->next_city){
  cout<<current->city_name<<" ";
  }
  cout<<endl;
}