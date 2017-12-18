#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsCollectionsRunePage.hpp>
namespace lol {
  struct LolCollectionsCollectionsRuneBook { 
    std::vector<LolCollectionsCollectionsRunePage> pages;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsRuneBook& v) {
    j["pages"] = v.pages; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsRuneBook& v) {
    v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsRunePage>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}