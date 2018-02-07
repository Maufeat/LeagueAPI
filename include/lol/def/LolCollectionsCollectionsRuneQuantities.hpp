#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsRuneQuantity.hpp"
namespace lol {
  struct LolCollectionsCollectionsRuneQuantities { 
    uint64_t summonerId;
    std::vector<LolCollectionsCollectionsRuneQuantity> runeQuantities; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsRuneQuantities& v) {
    j["summonerId"] = v.summonerId; 
    j["runeQuantities"] = v.runeQuantities; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsRuneQuantities& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.runeQuantities = j.at("runeQuantities").get<std::vector<LolCollectionsCollectionsRuneQuantity>>(); 
  }
}