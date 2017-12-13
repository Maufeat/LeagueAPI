#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsCollectionsMasteryPage.hpp>
namespace lol {
  struct LolCollectionsCollectionsMasteryBook { 
    uint64_t summonerId;
    std::vector<LolCollectionsCollectionsMasteryPage> pages; 
  };
  void to_json(json& j, const LolCollectionsCollectionsMasteryBook& v) {
  j["summonerId"] = v.summonerId; 
  j["pages"] = v.pages; 
  }
  void from_json(const json& j, LolCollectionsCollectionsMasteryBook& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsMasteryPage>>(); 
  }
}