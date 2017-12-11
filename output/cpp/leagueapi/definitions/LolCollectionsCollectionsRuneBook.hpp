#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsRunePage.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsRuneBook { /**/ 
    uint64_t summonerId;/**/
    std::vector<LolCollectionsCollectionsRunePage> pages;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsRuneBook& v) { 
    j["summonerId"] = v.summonerId;
    j["pages"] = v.pages;
  }
  static void from_json(const json& j, LolCollectionsCollectionsRuneBook& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsRunePage>>(); 
  }
} 