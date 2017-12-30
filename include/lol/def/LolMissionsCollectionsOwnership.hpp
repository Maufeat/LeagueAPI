#pragma once
#include "../base_def.hpp" 
#include "LolMissionsCollectionsRental.hpp"
namespace lol {
  struct LolMissionsCollectionsOwnership { 
    bool freeToPlayReward;
    LolMissionsCollectionsRental rental;
    bool owned; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.rental = j.at("rental").get<LolMissionsCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
}