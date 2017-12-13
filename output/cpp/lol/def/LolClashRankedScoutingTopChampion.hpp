#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashKdaClassification.hpp>
namespace lol {
  struct LolClashRankedScoutingTopChampion { 
    LolClashKdaClassification kdaClassification;
    std::string kda;
    int32_t rank;
    int32_t winCount;
    int32_t winRate;
    int32_t gameCount;
    int32_t championId; 
  };
  void to_json(json& j, const LolClashRankedScoutingTopChampion& v) {
  j["kdaClassification"] = v.kdaClassification; 
  j["kda"] = v.kda; 
  j["rank"] = v.rank; 
  j["winCount"] = v.winCount; 
  j["winRate"] = v.winRate; 
  j["gameCount"] = v.gameCount; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, LolClashRankedScoutingTopChampion& v) {
  v.kdaClassification = j.at("kdaClassification").get<LolClashKdaClassification>(); 
  v.kda = j.at("kda").get<std::string>(); 
  v.rank = j.at("rank").get<int32_t>(); 
  v.winCount = j.at("winCount").get<int32_t>(); 
  v.winRate = j.at("winRate").get<int32_t>(); 
  v.gameCount = j.at("gameCount").get<int32_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}