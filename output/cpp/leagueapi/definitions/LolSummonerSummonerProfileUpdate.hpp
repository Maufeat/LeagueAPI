#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSummonerSummonerProfileUpdate { /**/ 
    json value;/**/
    std::string key;/**/
    std::string inventory;/**/
  };
  static void to_json(json& j, const LolSummonerSummonerProfileUpdate& v) { 
    j["value"] = v.value;
    j["key"] = v.key;
    j["inventory"] = v.inventory;
  }
  static void from_json(const json& j, LolSummonerSummonerProfileUpdate& v) { 
    v.value = j.at("value").get<json>(); 
    v.key = j.at("key").get<std::string>(); 
    v.inventory = j.at("inventory").get<std::string>(); 
  }
} 