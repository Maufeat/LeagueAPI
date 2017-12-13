#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPersonalizedOffersPurchaseItem.hpp>
#include <lol/def/LolPersonalizedOffersWallet.hpp>
namespace lol {
  struct LolPersonalizedOffersPurchaseResponse { 
    LolPersonalizedOffersWallet wallet;
    std::vector<LolPersonalizedOffersPurchaseItem> items; 
  };
  void to_json(json& j, const LolPersonalizedOffersPurchaseResponse& v) {
    j["wallet"] = v.wallet; 
    j["items"] = v.items; 
  }
  void from_json(const json& j, LolPersonalizedOffersPurchaseResponse& v) {
    v.wallet = j.at("wallet").get<LolPersonalizedOffersWallet>(); 
    v.items = j.at("items").get<std::vector<LolPersonalizedOffersPurchaseItem>>(); 
  }
}