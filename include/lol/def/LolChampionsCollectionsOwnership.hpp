#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsRental.hpp"
namespace lol {
  struct LolChampionsCollectionsOwnership { 
    bool freeToPlayReward;
    bool owned;
    LolChampionsCollectionsRental rental; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolChampionsCollectionsRental>(); 
  }
}