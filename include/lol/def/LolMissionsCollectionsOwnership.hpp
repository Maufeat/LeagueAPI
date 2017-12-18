#pragma once
#include "../base_def.hpp" 
#include "LolMissionsCollectionsRental.hpp"
namespace lol {
  struct LolMissionsCollectionsOwnership { 
    LolMissionsCollectionsRental rental;
    bool owned;
    bool freeToPlayReward; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsOwnership& v) {
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsOwnership& v) {
    v.rental = j.at("rental").get<LolMissionsCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}