#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsMasteryPage.hpp"
namespace lol {
  struct LolCollectionsCollectionsMasteryBook { 
    std::vector<LolCollectionsCollectionsMasteryPage> pages;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsMasteryBook& v) {
    j["pages"] = v.pages; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsMasteryBook& v) {
    v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsMasteryPage>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}