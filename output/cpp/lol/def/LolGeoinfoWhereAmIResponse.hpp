#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGeoinfoWhereAmIResponse { 
    std::string region;
    std::string city;
    std::string country; 
  };
  void to_json(json& j, const LolGeoinfoWhereAmIResponse& v) {
    j["region"] = v.region; 
    j["city"] = v.city; 
    j["country"] = v.country; 
  }
  void from_json(const json& j, LolGeoinfoWhereAmIResponse& v) {
    v.region = j.at("region").get<std::string>(); 
    v.city = j.at("city").get<std::string>(); 
    v.country = j.at("country").get<std::string>(); 
  }
}