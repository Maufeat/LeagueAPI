#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersPurchaseItem.hpp>
#include <leagueapi/definitions/LolPersonalizedOffersWallet.hpp>

namespace leagueapi {
  struct LolPersonalizedOffersPurchaseResponse { /**/ 
    std::vector<LolPersonalizedOffersPurchaseItem> items;/**/
    LolPersonalizedOffersWallet wallet;/**/
  };
  static void to_json(json& j, const LolPersonalizedOffersPurchaseResponse& v) { 
    j["items"] = v.items;
    j["wallet"] = v.wallet;
  }
  static void from_json(const json& j, LolPersonalizedOffersPurchaseResponse& v) { 
    v.items = j.at("items").get<std::vector<LolPersonalizedOffersPurchaseItem>>(); 
    v.wallet = j.at("wallet").get<LolPersonalizedOffersWallet>(); 
  }
} 