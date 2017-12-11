#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolBannersTournamentFlagInventoryItem.hpp>"

namespace leagueapi {
  struct LolBannersInventoryItemsByType { /**/ 
    std::vector<LolBannersTournamentFlagInventoryItem> TOURNAMENT_FLAG;/**/
  };
  static void to_json(json& j, const LolBannersInventoryItemsByType& v) { 
    j["TOURNAMENT_FLAG"] = v.TOURNAMENT_FLAG;
  }
  static void from_json(const json& j, LolBannersInventoryItemsByType& v) { 
    v.TOURNAMENT_FLAG = j.at("TOURNAMENT_FLAG").get<std::vector<LolBannersTournamentFlagInventoryItem>>(); 
  }
} 