#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsRental.hpp"
namespace lol {
  struct LolCollectionsCollectionsOwnership { 
    bool freeToPlayReward;
    bool owned;
    LolCollectionsCollectionsRental rental; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolCollectionsCollectionsRental>(); 
  }
}