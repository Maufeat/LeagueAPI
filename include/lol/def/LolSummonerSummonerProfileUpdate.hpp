#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSummonerSummonerProfileUpdate { 
    std::string key;
    json value;
    std::string inventory; 
  };
  inline void to_json(json& j, const LolSummonerSummonerProfileUpdate& v) {
    j["key"] = v.key; 
    j["value"] = v.value; 
    j["inventory"] = v.inventory; 
  }
  inline void from_json(const json& j, LolSummonerSummonerProfileUpdate& v) {
    v.key = j.at("key").get<std::string>(); 
    v.value = j.at("value").get<json>(); 
    v.inventory = j.at("inventory").get<std::string>(); 
  }
}