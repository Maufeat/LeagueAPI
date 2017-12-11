#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPersonalizedOffersPurchaseItem { /**/ 
    int32_t itemId;/**/
    std::string inventoryType;/**/
    int64_t pricePaid;/**/
  };
  static void to_json(json& j, const LolPersonalizedOffersPurchaseItem& v) { 
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["pricePaid"] = v.pricePaid;
  }
  static void from_json(const json& j, LolPersonalizedOffersPurchaseItem& v) { 
    v.itemId = j.at("itemId").get<int32_t>(); 
    v.inventoryType = j.at("inventoryType").get<std::string>(); 
    v.pricePaid = j.at("pricePaid").get<int64_t>(); 
  }
} 