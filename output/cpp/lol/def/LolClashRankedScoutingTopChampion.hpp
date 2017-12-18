#pragma once
#include "../base_def.hpp" 
#include "LolClashKdaClassification.hpp"
namespace lol {
  struct LolClashRankedScoutingTopChampion { 
    int32_t winRate;
    int32_t rank;
    std::string kda;
    int32_t winCount;
    LolClashKdaClassification kdaClassification;
    int32_t gameCount;
    int32_t championId; 
  };
  inline void to_json(json& j, const LolClashRankedScoutingTopChampion& v) {
    j["winRate"] = v.winRate; 
    j["rank"] = v.rank; 
    j["kda"] = v.kda; 
    j["winCount"] = v.winCount; 
    j["kdaClassification"] = v.kdaClassification; 
    j["gameCount"] = v.gameCount; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolClashRankedScoutingTopChampion& v) {
    v.winRate = j.at("winRate").get<int32_t>(); 
    v.rank = j.at("rank").get<int32_t>(); 
    v.kda = j.at("kda").get<std::string>(); 
    v.winCount = j.at("winCount").get<int32_t>(); 
    v.kdaClassification = j.at("kdaClassification").get<LolClashKdaClassification>(); 
    v.gameCount = j.at("gameCount").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}