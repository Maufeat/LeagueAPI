#pragma once
#include "../base_def.hpp" 
#include "LolPurchaseWidgetTransaction.hpp"
#include "LolPurchaseWidgetPurchaseItem.hpp"
#include "LolPurchaseWidgetWallet.hpp"
namespace lol {
  struct LolPurchaseWidgetPurchaseResponse { 
    std::vector<LolPurchaseWidgetTransaction> transactions;
    LolPurchaseWidgetWallet wallet;
    std::vector<LolPurchaseWidgetPurchaseItem> items; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetPurchaseResponse& v) {
    j["transactions"] = v.transactions; 
    j["wallet"] = v.wallet; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetPurchaseResponse& v) {
    v.transactions = j.at("transactions").get<std::vector<LolPurchaseWidgetTransaction>>(); 
    v.wallet = j.at("wallet").get<LolPurchaseWidgetWallet>(); 
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>(); 
  }
}