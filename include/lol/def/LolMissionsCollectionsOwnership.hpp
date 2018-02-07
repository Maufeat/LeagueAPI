#pragma once
#include "../base_def.hpp" 
#include "LolMissionsCollectionsRental.hpp"
namespace lol {
  struct LolMissionsCollectionsOwnership { 
    bool freeToPlayReward;
    bool owned;
    LolMissionsCollectionsRental rental; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward; 
    j["owned"] = v.owned; 
    j["rental"] = v.rental; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.rental = j.at("rental").get<LolMissionsCollectionsRental>(); 
  }
}