#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryMastery { 
    uint16_t rank;
    uint16_t masteryId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryMastery& v) {
    j["rank"] = v.rank; 
    j["masteryId"] = v.masteryId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryMastery& v) {
    v.rank = j.at("rank").get<uint16_t>(); 
    v.masteryId = j.at("masteryId").get<uint16_t>(); 
  }
}