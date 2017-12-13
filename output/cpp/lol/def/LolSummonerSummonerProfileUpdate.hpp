#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSummonerSummonerProfileUpdate { 
    std::string inventory;
    std::string key;
    json value; 
  };
  void to_json(json& j, const LolSummonerSummonerProfileUpdate& v) {
  j["inventory"] = v.inventory; 
  j["key"] = v.key; 
  j["value"] = v.value; 
  }
  void from_json(const json& j, LolSummonerSummonerProfileUpdate& v) {
  v.inventory = j.at("inventory").get<std::string>(); 
  v.key = j.at("key").get<std::string>(); 
  v.value = j.at("value").get<json>(); 
  }
}