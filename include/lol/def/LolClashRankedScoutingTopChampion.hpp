#pragma once
#include "../base_def.hpp" 
#include "LolClashKdaClassification.hpp"
namespace lol {
  struct LolClashRankedScoutingTopChampion { 
    LolClashKdaClassification kdaClassification;
    int32_t winCount;
    int32_t rank;
    int32_t winRate;
    int32_t gameCount;
    std::string kda;
    int32_t championId; 
  };
  inline void to_json(json& j, const LolClashRankedScoutingTopChampion& v) {
    j["kdaClassification"] = v.kdaClassification; 
    j["winCount"] = v.winCount; 
    j["rank"] = v.rank; 
    j["winRate"] = v.winRate; 
    j["gameCount"] = v.gameCount; 
    j["kda"] = v.kda; 
    j["championId"] = v.championId; 
  }
  inline void from_json(const json& j, LolClashRankedScoutingTopChampion& v) {
    v.kdaClassification = j.at("kdaClassification").get<LolClashKdaClassification>(); 
    v.winCount = j.at("winCount").get<int32_t>(); 
    v.rank = j.at("rank").get<int32_t>(); 
    v.winRate = j.at("winRate").get<int32_t>(); 
    v.gameCount = j.at("gameCount").get<int32_t>(); 
    v.kda = j.at("kda").get<std::string>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
}