#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMissionsCollectionsRental.hpp>
namespace lol {
  struct LolMissionsCollectionsOwnership { 
    LolMissionsCollectionsRental rental;
    bool owned;
    bool freeToPlayReward; 
  };
  void to_json(json& j, const LolMissionsCollectionsOwnership& v) {
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  void from_json(const json& j, LolMissionsCollectionsOwnership& v) {
    v.rental = j.at("rental").get<LolMissionsCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}