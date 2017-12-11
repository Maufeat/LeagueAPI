#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersFriend { /**/ 
    std::string availability;/**/
    uint64_t id;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersFriend& v) { 
    j["availability"] = v.availability;
    j["id"] = v.id;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersFriend& v) { 
    v.availability = j.at("availability").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 