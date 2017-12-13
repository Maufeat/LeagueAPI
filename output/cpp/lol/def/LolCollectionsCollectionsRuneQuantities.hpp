#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsCollectionsRuneQuantity.hpp>
namespace lol {
  struct LolCollectionsCollectionsRuneQuantities { 
    uint64_t summonerId;
    std::vector<LolCollectionsCollectionsRuneQuantity> runeQuantities; 
  };
  void to_json(json& j, const LolCollectionsCollectionsRuneQuantities& v) {
  j["summonerId"] = v.summonerId; 
  j["runeQuantities"] = v.runeQuantities; 
  }
  void from_json(const json& j, LolCollectionsCollectionsRuneQuantities& v) {
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.runeQuantities = j.at("runeQuantities").get<std::vector<LolCollectionsCollectionsRuneQuantity>>(); 
  }
}