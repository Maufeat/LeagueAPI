#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootCollectionsRental.hpp>
namespace lol {
  struct LolLootCollectionsOwnership { 
    LolLootCollectionsRental rental;
    bool freeToPlayReward;
    bool owned; 
  };
  void to_json(json& j, const LolLootCollectionsOwnership& v) {
  j["rental"] = v.rental; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  j["owned"] = v.owned; 
  }
  void from_json(const json& j, LolLootCollectionsOwnership& v) {
  v.rental = j.at("rental").get<LolLootCollectionsRental>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  v.owned = j.at("owned").get<bool>(); 
  }
}