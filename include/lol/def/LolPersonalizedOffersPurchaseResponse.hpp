#pragma once
#include "../base_def.hpp" 
#include "LolPersonalizedOffersWallet.hpp"
#include "LolPersonalizedOffersPurchaseItem.hpp"
namespace lol {
  struct LolPersonalizedOffersPurchaseResponse { 
    std::vector<LolPersonalizedOffersPurchaseItem> items;
    LolPersonalizedOffersWallet wallet; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersPurchaseResponse& v) {
    j["items"] = v.items; 
    j["wallet"] = v.wallet; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersPurchaseResponse& v) {
    v.items = j.at("items").get<std::vector<LolPersonalizedOffersPurchaseItem>>(); 
    v.wallet = j.at("wallet").get<LolPersonalizedOffersWallet>(); 
  }
}