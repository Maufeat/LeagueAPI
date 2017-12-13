#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGeoinfoWhereAmIResponse { 
    std::string country;
    std::string city;
    std::string region; 
  };
  void to_json(json& j, const LolGeoinfoWhereAmIResponse& v) {
  j["country"] = v.country; 
  j["city"] = v.city; 
  j["region"] = v.region; 
  }
  void from_json(const json& j, LolGeoinfoWhereAmIResponse& v) {
  v.country = j.at("country").get<std::string>(); 
  v.city = j.at("city").get<std::string>(); 
  v.region = j.at("region").get<std::string>(); 
  }
}