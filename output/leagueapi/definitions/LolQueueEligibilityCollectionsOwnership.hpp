#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolQueueEligibilityCollectionsRental.hpp>"

namespace leagueapi {
  struct LolQueueEligibilityCollectionsOwnership { /**/ 
    LolQueueEligibilityCollectionsRental rental;/**/
    bool freeToPlayReward;/**/
    bool owned;/**/
  };
  static void to_json(json& j, const LolQueueEligibilityCollectionsOwnership& v) { 
    j["rental"] = v.rental;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
  }
  static void from_json(const json& j, LolQueueEligibilityCollectionsOwnership& v) { 
    v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
} 