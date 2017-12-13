#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsCollectionsRental.hpp>
namespace lol {
  struct LolCollectionsCollectionsOwnership { 
    LolCollectionsCollectionsRental rental;
    bool owned;
    bool freeToPlayReward; 
  };
  void to_json(json& j, const LolCollectionsCollectionsOwnership& v) {
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  void from_json(const json& j, LolCollectionsCollectionsOwnership& v) {
    v.rental = j.at("rental").get<LolCollectionsCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}