#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolGeoinfoWhereAmIResponse { 
    std::string region;
    std::string country;
    std::string city; 
  };
  inline void to_json(json& j, const LolGeoinfoWhereAmIResponse& v) {
    j["region"] = v.region; 
    j["country"] = v.country; 
    j["city"] = v.city; 
  }
  inline void from_json(const json& j, LolGeoinfoWhereAmIResponse& v) {
    v.region = j.at("region").get<std::string>(); 
    v.country = j.at("country").get<std::string>(); 
    v.city = j.at("city").get<std::string>(); 
  }
}