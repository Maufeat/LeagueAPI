#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMissionsCollectionsRental.hpp>
namespace lol {
  struct LolMissionsCollectionsOwnership { 
    LolMissionsCollectionsRental rental;
    bool freeToPlayReward;
    bool owned; 
  };
  void to_json(json& j, const LolMissionsCollectionsOwnership& v) {
  j["rental"] = v.rental; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  j["owned"] = v.owned; 
  }
  void from_json(const json& j, LolMissionsCollectionsOwnership& v) {
  v.rental = j.at("rental").get<LolMissionsCollectionsRental>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  v.owned = j.at("owned").get<bool>(); 
  }
}