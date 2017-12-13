#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsCollectionsRunePage.hpp>
namespace lol {
  struct LolCollectionsCollectionsRuneBook { 
    uint64_t summonerId;
    std::vector<LolCollectionsCollectionsRunePage> pages; 
  };
  void to_json(json& j, const LolCollectionsCollectionsRuneBook& v) {
  j["summonerId"] = v.summonerId; 
  j["pages"] = v.pages; 
  }
  void from_json(const json& j, LolCollectionsCollectionsRuneBook& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.pages = j.at("pages").get<std::vector<LolCollectionsCollectionsRunePage>>(); 
  }
}