#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetPurchaseItem.hpp"
#include "LolPurchaseWidgetTransaction.hpp"
#include "LolPurchaseWidgetWallet.hpp"
namespace lol {
  struct LolPurchaseWidgetPurchaseResponse { 
    std::vector<LolPurchaseWidgetTransaction> transactions;
    std::vector<LolPurchaseWidgetPurchaseItem> items;
    LolPurchaseWidgetWallet wallet; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetPurchaseResponse& v) {
    j["transactions"] = v.transactions; 
    j["items"] = v.items; 
    j["wallet"] = v.wallet; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetPurchaseResponse& v) {
    v.transactions = j.at("transactions").get<std::vector<LolPurchaseWidgetTransaction>>(); 
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>(); 
    v.wallet = j.at("wallet").get<LolPurchaseWidgetWallet>(); 
  }
}