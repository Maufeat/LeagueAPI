#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolBannersCapClashFlagEntitlementPayload.hpp>"

namespace leagueapi {
  struct LolBannersTournamentFlagInventoryItem { /**/ 
    LolBannersCapClashFlagEntitlementPayload payload;/**/
    std::string purchaseDate;/**/
  };
  static void to_json(json& j, const LolBannersTournamentFlagInventoryItem& v) { 
    j["payload"] = v.payload;
    j["purchaseDate"] = v.purchaseDate;
  }
  static void from_json(const json& j, LolBannersTournamentFlagInventoryItem& v) { 
    v.payload = j.at("payload").get<LolBannersCapClashFlagEntitlementPayload>(); 
    v.purchaseDate = j.at("purchaseDate").get<std::string>(); 
  }
} 