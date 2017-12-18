#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsRental.hpp"
namespace lol {
  struct LolCollectionsCollectionsOwnership { 
    LolCollectionsCollectionsRental rental;
    bool owned;
    bool freeToPlayReward; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsOwnership& v) {
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsOwnership& v) {
    v.rental = j.at("rental").get<LolCollectionsCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}