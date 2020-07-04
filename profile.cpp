#include <iostream>
#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns = "they/them")
{
  name = new_name;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}

std::string Profile::view_profile()
{
  std::string s = "";
  s += "\nName: " + name;
  s += "\nLocation: " + city + ", " + country;
  s += "\nPronouns: " + pronouns;
  s += "\nHobbies: ";
  for (int i = 0; i < hobbies.size(); i++)
  {
    s += hobbies[i];
    if (i < hobbies.size() - 1)
      s += ", ";
  }

  return s;
}

void Profile::add_hobby(std::string new_hobby)
{
  hobbies.push_back(new_hobby);
}
