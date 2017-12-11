#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPerksCollectionsRunePage.hpp>

namespace leagueapi {
  struct LolPerksCollectionsRuneBook { /**/ 
    uint64_t summonerId;/**/
    std::vector<LolPerksCollectionsRunePage> pages;/**/
  };
  static void to_json(json& j, const LolPerksCollectionsRuneBook& v) { 
    j["summonerId"] = v.summonerId;
    j["pages"] = v.pages;
  }
  static void from_json(const json& j, LolPerksCollectionsRuneBook& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.pages = j.at("pages").get<std::vector<LolPerksCollectionsRunePage>>(); 
  }
} 