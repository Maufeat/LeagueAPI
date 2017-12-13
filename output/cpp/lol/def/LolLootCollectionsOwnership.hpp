#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootCollectionsRental.hpp>
namespace lol {
  struct LolLootCollectionsOwnership { 
    LolLootCollectionsRental rental;
    bool owned;
    bool freeToPlayReward; 
  };
  void to_json(json& j, const LolLootCollectionsOwnership& v) {
  j["rental"] = v.rental; 
  j["owned"] = v.owned; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  void from_json(const json& j, LolLootCollectionsOwnership& v) {
  v.rental = j.at("rental").get<LolLootCollectionsRental>(); 
  v.owned = j.at("owned").get<bool>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}