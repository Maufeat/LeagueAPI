#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsRental.hpp"
namespace lol {
  struct LolCollectionsCollectionsOwnership { 
    bool owned;
    LolCollectionsCollectionsRental rental;
    bool freeToPlayReward; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsOwnership& v) {
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsOwnership& v) {
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolCollectionsCollectionsRental>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}