#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootGameDataSummonerIcon { 
    std::string iconPath;
    int32_t id; 
  };
  inline void to_json(json& j, const LolLootGameDataSummonerIcon& v) {
    j["iconPath"] = v.iconPath; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLootGameDataSummonerIcon& v) {
    v.iconPath = j.at("iconPath").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}