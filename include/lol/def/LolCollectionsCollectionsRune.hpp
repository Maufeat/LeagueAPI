#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsRune { 
    uint32_t runeId;
    uint32_t runeSlotId; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsRune& v) {
    j["runeId"] = v.runeId; 
    j["runeSlotId"] = v.runeSlotId; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsRune& v) {
    v.runeId = j.at("runeId").get<uint32_t>(); 
    v.runeSlotId = j.at("runeSlotId").get<uint32_t>(); 
  }
}