#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPerksCollectionsRunePage.hpp>
namespace lol {
  struct LolPerksCollectionsRuneBook { 
    std::vector<LolPerksCollectionsRunePage> pages;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolPerksCollectionsRuneBook& v) {
    j["pages"] = v.pages; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolPerksCollectionsRuneBook& v) {
    v.pages = j.at("pages").get<std::vector<LolPerksCollectionsRunePage>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}