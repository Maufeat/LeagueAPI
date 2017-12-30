#pragma once
#include "../base_def.hpp" 
#include "LolClashKdaClassification.hpp"
namespace lol {
  struct LolClashRankedScoutingTopChampion { 
    int32_t winCount;
    int32_t gameCount;
    LolClashKdaClassification kdaClassification;
    std::string kda;
    int32_t rank;
    int32_t championId;
    int32_t winRate; 
  };
  inline void to_json(json& j, const LolClashRankedScoutingTopChampion& v) {
    j["winCount"] = v.winCount; 
    j["gameCount"] = v.gameCount; 
    j["kdaClassification"] = v.kdaClassification; 
    j["kda"] = v.kda; 
    j["rank"] = v.rank; 
    j["championId"] = v.championId; 
    j["winRate"] = v.winRate; 
  }
  inline void from_json(const json& j, LolClashRankedScoutingTopChampion& v) {
    v.winCount = j.at("winCount").get<int32_t>(); 
    v.gameCount = j.at("gameCount").get<int32_t>(); 
    v.kdaClassification = j.at("kdaClassification").get<LolClashKdaClassification>(); 
    v.kda = j.at("kda").get<std::string>(); 
    v.rank = j.at("rank").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.winRate = j.at("winRate").get<int32_t>(); 
  }
}