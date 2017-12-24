#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetWallet.hpp"
#include "LolPurchaseWidgetTransaction.hpp"
#include "LolPurchaseWidgetPurchaseItem.hpp"
namespace lol {
  struct LolPurchaseWidgetPurchaseResponse { 
    std::vector<LolPurchaseWidgetPurchaseItem> items;
    std::vector<LolPurchaseWidgetTransaction> transactions;
    LolPurchaseWidgetWallet wallet; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetPurchaseResponse& v) {
    j["items"] = v.items; 
    j["transactions"] = v.transactions; 
    j["wallet"] = v.wallet; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetPurchaseResponse& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>(); 
    v.transactions = j.at("transactions").get<std::vector<LolPurchaseWidgetTransaction>>(); 
    v.wallet = j.at("wallet").get<LolPurchaseWidgetWallet>(); 
  }
}