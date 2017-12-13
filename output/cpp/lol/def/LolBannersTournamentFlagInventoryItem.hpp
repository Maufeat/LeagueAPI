#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolBannersCapClashFlagEntitlementPayload.hpp>
namespace lol {
  struct LolBannersTournamentFlagInventoryItem { 
    LolBannersCapClashFlagEntitlementPayload payload;
    std::string purchaseDate; 
  };
  void to_json(json& j, const LolBannersTournamentFlagInventoryItem& v) {
  j["payload"] = v.payload; 
  j["purchaseDate"] = v.purchaseDate; 
  }
  void from_json(const json& j, LolBannersTournamentFlagInventoryItem& v) {
  v.payload = j.at("payload").get<LolBannersCapClashFlagEntitlementPayload>(); 
  v.purchaseDate = j.at("purchaseDate").get<std::string>(); 
  }
}