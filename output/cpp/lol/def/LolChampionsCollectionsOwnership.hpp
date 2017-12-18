#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampionsCollectionsRental.hpp>
namespace lol {
  struct LolChampionsCollectionsOwnership { 
    LolChampionsCollectionsRental rental;
    bool owned;
    bool freeToPlayReward; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsOwnership& v) {
    j["rental"] = v.rental; 
    j["owned"] = v.owned; 
    j["freeToPlayReward"] = v.freeToPlayReward; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsOwnership& v) {
    v.rental = j.at("rental").get<LolChampionsCollectionsRental>(); 
    v.owned = j.at("owned").get<bool>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  }
}