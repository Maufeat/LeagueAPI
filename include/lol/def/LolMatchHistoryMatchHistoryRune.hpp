#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolMatchHistoryMatchHistoryRune { 
    uint16_t runeId;
    uint16_t rank; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryRune& v) {
    j["runeId"] = v.runeId; 
    j["rank"] = v.rank; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryRune& v) {
    v.runeId = j.at("runeId").get<uint16_t>(); 
    v.rank = j.at("rank").get<uint16_t>(); 
  }
}