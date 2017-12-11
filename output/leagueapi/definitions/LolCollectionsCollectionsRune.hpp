#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsRune { /**/ 
    uint32_t runeSlotId;/**/
    uint32_t runeId;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsRune& v) { 
    j["runeSlotId"] = v.runeSlotId;
    j["runeId"] = v.runeId;
  }
  static void from_json(const json& j, LolCollectionsCollectionsRune& v) { 
    v.runeSlotId = j.at("runeSlotId").get<uint32_t>(); 
    v.runeId = j.at("runeId").get<uint32_t>(); 
  }
} 