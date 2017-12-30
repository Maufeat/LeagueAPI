#pragma once
#include "../base_def.hpp" 
#include "LolChampionsCollectionsRental.hpp"
namespace lol {
  struct LolChampionsCollectionsOwnership { 
    bool freeToPlayReward;
    LolChampionsCollectionsRental rental;
    bool owned; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.rental = j.at("rental").get<LolChampionsCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
}