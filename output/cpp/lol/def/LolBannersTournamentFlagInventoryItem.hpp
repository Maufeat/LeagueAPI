#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolBannersCapClashFlagEntitlementPayload.hpp>
namespace lol {
  struct LolBannersTournamentFlagInventoryItem { 
    std::string purchaseDate;
    LolBannersCapClashFlagEntitlementPayload payload; 
  };
  void to_json(json& j, const LolBannersTournamentFlagInventoryItem& v) {
  j["purchaseDate"] = v.purchaseDate; 
  j["payload"] = v.payload; 
  }
  void from_json(const json& j, LolBannersTournamentFlagInventoryItem& v) {
  v.purchaseDate = j.at("purchaseDate").get<std::string>(); 
  v.payload = j.at("payload").get<LolBannersCapClashFlagEntitlementPayload>(); 
  }
}