#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPersonalizedOffersWallet.hpp>
#include <lol/def/LolPersonalizedOffersPurchaseItem.hpp>
namespace lol {
  struct LolPersonalizedOffersPurchaseResponse { 
    LolPersonalizedOffersWallet wallet;
    std::vector<LolPersonalizedOffersPurchaseItem> items; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersPurchaseResponse& v) {
    j["wallet"] = v.wallet; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersPurchaseResponse& v) {
    v.wallet = j.at("wallet").get<LolPersonalizedOffersWallet>(); 
    v.items = j.at("items").get<std::vector<LolPersonalizedOffersPurchaseItem>>(); 
  }
}