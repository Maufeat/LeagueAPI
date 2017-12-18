#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPerksCollectionsRune { 
    uint32_t runeSlotId;
    uint32_t runeId; 
  };
  inline void to_json(json& j, const LolPerksCollectionsRune& v) {
    j["runeSlotId"] = v.runeSlotId; 
    j["runeId"] = v.runeId; 
  }
  inline void from_json(const json& j, LolPerksCollectionsRune& v) {
    v.runeSlotId = j.at("runeSlotId").get<uint32_t>(); 
    v.runeId = j.at("runeId").get<uint32_t>(); 
  }
}