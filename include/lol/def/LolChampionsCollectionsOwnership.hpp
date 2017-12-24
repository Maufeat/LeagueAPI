#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsRental.hpp"
namespace lol {
  struct LolChampionsCollectionsOwnership { 
    bool owned;
    LolChampionsCollectionsRental rental;
    bool freeToPlayReward; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsOwnership& v) {
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsOwnership& v) {
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolChampionsCollectionsRental>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}