#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsRuneQuantity.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsRuneQuantities { /**/ 
    uint64_t summonerId;/**/
    std::vector<LolCollectionsCollectionsRuneQuantity> runeQuantities;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsRuneQuantities& v) { 
    j["summonerId"] = v.summonerId;
    j["runeQuantities"] = v.runeQuantities;
  }
  static void from_json(const json& j, LolCollectionsCollectionsRuneQuantities& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.runeQuantities = j.at("runeQuantities").get<std::vector<LolCollectionsCollectionsRuneQuantity>>(); 
  }
} 