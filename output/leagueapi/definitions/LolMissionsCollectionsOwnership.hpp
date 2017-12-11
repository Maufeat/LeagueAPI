#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolMissionsCollectionsRental.hpp>"

namespace leagueapi {
  struct LolMissionsCollectionsOwnership { /**/ 
    LolMissionsCollectionsRental rental;/**/
    bool freeToPlayReward;/**/
    bool owned;/**/
  };
  static void to_json(json& j, const LolMissionsCollectionsOwnership& v) { 
    j["rental"] = v.rental;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
  }
  static void from_json(const json& j, LolMissionsCollectionsOwnership& v) { 
    v.rental = j.at("rental").get<LolMissionsCollectionsRental>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
} 