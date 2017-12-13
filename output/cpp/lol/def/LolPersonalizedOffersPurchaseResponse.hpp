#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPersonalizedOffersWallet.hpp>
#include <lol/def/LolPersonalizedOffersPurchaseItem.hpp>
namespace lol {
  struct LolPersonalizedOffersPurchaseResponse { 
    std::vector<LolPersonalizedOffersPurchaseItem> items;
    LolPersonalizedOffersWallet wallet; 
  };
  void to_json(json& j, const LolPersonalizedOffersPurchaseResponse& v) {
  j["items"] = v.items; 
  j["wallet"] = v.wallet; 
  }
  void from_json(const json& j, LolPersonalizedOffersPurchaseResponse& v) {
  v.items = j.at("items").get<std::vector<LolPersonalizedOffersPurchaseItem>>(); 
  v.wallet = j.at("wallet").get<LolPersonalizedOffersWallet>(); 
  }
}