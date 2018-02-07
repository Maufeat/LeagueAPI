#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootGameDataSummonerIcon { 
    int32_t id;
    std::string iconPath; 
  };
  inline void to_json(json& j, const LolLootGameDataSummonerIcon& v) {
    j["id"] = v.id; 
    j["iconPath"] = v.iconPath; 
  }
  inline void from_json(const json& j, LolLootGameDataSummonerIcon& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.iconPath = j.at("iconPath").get<std::string>(); 
  }
}