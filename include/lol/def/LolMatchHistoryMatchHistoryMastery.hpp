#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryMastery { 
    uint16_t masteryId;
    uint16_t rank; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryMastery& v) {
    j["masteryId"] = v.masteryId; 
    j["rank"] = v.rank; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryMastery& v) {
    v.masteryId = j.at("masteryId").get<uint16_t>(); 
    v.rank = j.at("rank").get<uint16_t>(); 
  }
}