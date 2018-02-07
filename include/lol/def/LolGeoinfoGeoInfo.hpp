#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGeoinfoGeoInfo { 
    std::string country;
    std::string city;
    std::string region; 
  };
  inline void to_json(json& j, const LolGeoinfoGeoInfo& v) {
    j["country"] = v.country; 
    j["city"] = v.city; 
    j["region"] = v.region; 
  }
  inline void from_json(const json& j, LolGeoinfoGeoInfo& v) {
    v.country = j.at("country").get<std::string>(); 
    v.city = j.at("city").get<std::string>(); 
    v.region = j.at("region").get<std::string>(); 
  }
}