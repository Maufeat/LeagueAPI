#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsRuneQuantity { /**/ 
    int32_t quantity;/**/
    uint32_t runeId;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsRuneQuantity& v) { 
    j["quantity"] = v.quantity;
    j["runeId"] = v.runeId;
  }
  static void from_json(const json& j, LolCollectionsCollectionsRuneQuantity& v) { 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.runeId = j.at("runeId").get<uint32_t>(); 
  }
} 