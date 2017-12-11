#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolCollectionsCollectionsMasteryPage.hpp>"

namespace leagueapi {
  struct LolCollectionsCollectionsMasteryBook { /**/ 
    uint64_t summonerId;/**/
    std::vector<LolCollectionsCollectionsMasteryPage> pages;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsMasteryBook& v) { 
    j["summonerId"] = v.summonerId;
    j["pages"] = v.pages;
  }
  static void from_json(const json& j, LolCollectionsCollectionsMasteryBook& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsMasteryPage>>(); 
  }
} 