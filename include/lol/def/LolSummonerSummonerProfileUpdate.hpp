#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerSummonerProfileUpdate { 
    std::string key;
    std::string inventory;
    json value; 
  };
  inline void to_json(json& j, const LolSummonerSummonerProfileUpdate& v) {
    j["key"] = v.key; 
    j["inventory"] = v.inventory; 
    j["value"] = v.value; 
  }
  inline void from_json(const json& j, LolSummonerSummonerProfileUpdate& v) {
    v.key = j.at("key").get<std::string>(); 
    v.inventory = j.at("inventory").get<std::string>(); 
    v.value = j.at("value").get<json>(); 
  }
}