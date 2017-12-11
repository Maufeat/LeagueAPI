#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsRental.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsOwnership { /**/ 
    LolCollectionsCollectionsRental rental;/**/
    bool freeToPlayReward;/**/
    bool owned;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsOwnership& v) { 
    j["rental"] = v.rental;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
  }
  static void from_json(const json& j, LolCollectionsCollectionsOwnership& v) { 
    v.rental = j.at("rental").get<LolCollectionsCollectionsRental>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
} 