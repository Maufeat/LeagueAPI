#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolGeoinfoGeoInfo { 
    std::string region;
    std::string city;
    std::string country; 
  };
  inline void to_json(json& j, const LolGeoinfoGeoInfo& v) {
    j["region"] = v.region; 
    j["city"] = v.city; 
    j["country"] = v.country; 
  }
  inline void from_json(const json& j, LolGeoinfoGeoInfo& v) {
    v.region = j.at("region").get<std::string>(); 
    v.city = j.at("city").get<std::string>(); 
    v.country = j.at("country").get<std::string>(); 
  }
}