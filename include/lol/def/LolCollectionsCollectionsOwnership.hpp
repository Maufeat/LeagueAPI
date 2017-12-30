#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsCollectionsRental.hpp"
namespace lol {
  struct LolCollectionsCollectionsOwnership { 
    bool freeToPlayReward;
    LolCollectionsCollectionsRental rental;
    bool owned; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.rental = j.at("rental").get<LolCollectionsCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
}