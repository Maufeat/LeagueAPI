#pragma once
#include "../base_def.hpp" 
#include "LolClashKdaClassification.hpp"
namespace lol {
  struct LolClashRankedScoutingTopChampion { 
    int32_t championId;
    int32_t rank;
    int32_t winCount;
    int32_t gameCount;
    int32_t winRate;
    std::string kda;
    LolClashKdaClassification kdaClassification; 
  };
  inline void to_json(json& j, const LolClashRankedScoutingTopChampion& v) {
    j["championId"] = v.championId; 
    j["rank"] = v.rank; 
    j["winCount"] = v.winCount; 
    j["gameCount"] = v.gameCount; 
    j["winRate"] = v.winRate; 
    j["kda"] = v.kda; 
    j["kdaClassification"] = v.kdaClassification; 
  }
  inline void from_json(const json& j, LolClashRankedScoutingTopChampion& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.rank = j.at("rank").get<int32_t>(); 
    v.winCount = j.at("winCount").get<int32_t>(); 
    v.gameCount = j.at("gameCount").get<int32_t>(); 
    v.winRate = j.at("winRate").get<int32_t>(); 
    v.kda = j.at("kda").get<std::string>(); 
    v.kdaClassification = j.at("kdaClassification").get<LolClashKdaClassification>(); 
  }
}