#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLootCollectionsRental.hpp>

namespace leagueapi {
  struct LolLootCollectionsOwnership { /**/ 
    LolLootCollectionsRental rental;/**/
    bool freeToPlayReward;/**/
    bool owned;/**/
  };
  static void to_json(json& j, const LolLootCollectionsOwnership& v) { 
    j["rental"] = v.rental;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
  }
  static void from_json(const json& j, LolLootCollectionsOwnership& v) { 
    v.rental = j.at("rental").get<LolLootCollectionsRental>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
} 