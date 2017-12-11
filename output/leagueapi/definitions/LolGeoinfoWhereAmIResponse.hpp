#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolGeoinfoWhereAmIResponse { /**/ 
    std::string country;/**/
    std::string city;/**/
    std::string region;/**/
  };
  static void to_json(json& j, const LolGeoinfoWhereAmIResponse& v) { 
    j["country"] = v.country;
    j["city"] = v.city;
    j["region"] = v.region;
  }
  static void from_json(const json& j, LolGeoinfoWhereAmIResponse& v) { 
    v.country = j.at("country").get<std::string>(); 
    v.city = j.at("city").get<std::string>(); 
    v.region = j.at("region").get<std::string>(); 
  }
} 