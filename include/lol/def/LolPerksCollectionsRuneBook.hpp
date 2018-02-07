#pragma once
#include "../base_def.hpp" 
#include "LolPerksCollectionsRunePage.hpp"
namespace lol {
  struct LolPerksCollectionsRuneBook { 
    uint64_t summonerId;
    std::vector<LolPerksCollectionsRunePage> pages; 
  };
  inline void to_json(json& j, const LolPerksCollectionsRuneBook& v) {
    j["summonerId"] = v.summonerId; 
    j["pages"] = v.pages; 
  }
  inline void from_json(const json& j, LolPerksCollectionsRuneBook& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.pages = j.at("pages").get<std::vector<LolPerksCollectionsRunePage>>(); 
  }
}