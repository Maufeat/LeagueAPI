#pragma once
#include "../base_def.hpp" 
#include "LolMissionsCollectionsRental.hpp"
namespace lol {
  struct LolMissionsCollectionsOwnership { 
    bool owned;
    LolMissionsCollectionsRental rental;
    bool freeToPlayReward; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsOwnership& v) {
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsOwnership& v) {
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolMissionsCollectionsRental>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}