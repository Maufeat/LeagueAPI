#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampionsCollectionsRental.hpp>
namespace lol {
  struct LolChampionsCollectionsOwnership { 
    LolChampionsCollectionsRental rental;
    bool freeToPlayReward;
    bool owned; 
  };
  void to_json(json& j, const LolChampionsCollectionsOwnership& v) {
  j["rental"] = v.rental; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  j["owned"] = v.owned; 
  }
  void from_json(const json& j, LolChampionsCollectionsOwnership& v) {
  v.rental = j.at("rental").get<LolChampionsCollectionsRental>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  v.owned = j.at("owned").get<bool>(); 
  }
}