#pragma once
#include "../base_def.hpp" 
#include "LolBannersCapClashFlagEntitlementPayload.hpp"
namespace lol {
  struct LolBannersTournamentFlagInventoryItem { 
    LolBannersCapClashFlagEntitlementPayload payload;
    std::string purchaseDate; 
  };
  inline void to_json(json& j, const LolBannersTournamentFlagInventoryItem& v) {
    j["payload"] = v.payload; 
    j["purchaseDate"] = v.purchaseDate; 
  }
  inline void from_json(const json& j, LolBannersTournamentFlagInventoryItem& v) {
    v.payload = j.at("payload").get<LolBannersCapClashFlagEntitlementPayload>(); 
    v.purchaseDate = j.at("purchaseDate").get<std::string>(); 
  }
}