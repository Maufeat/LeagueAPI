#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetWallet.hpp>
#include <lol/def/LolPurchaseWidgetPurchaseItem.hpp>
#include <lol/def/LolPurchaseWidgetTransaction.hpp>
namespace lol {
  struct LolPurchaseWidgetPurchaseResponse { 
    std::vector<LolPurchaseWidgetTransaction> transactions;
    std::vector<LolPurchaseWidgetPurchaseItem> items;
    LolPurchaseWidgetWallet wallet; 
  };
  void to_json(json& j, const LolPurchaseWidgetPurchaseResponse& v) {
  j["transactions"] = v.transactions; 
  j["items"] = v.items; 
  j["wallet"] = v.wallet; 
  }
  void from_json(const json& j, LolPurchaseWidgetPurchaseResponse& v) {
  v.transactions = j.at("transactions").get<std::vector<LolPurchaseWidgetTransaction>>(); 
  v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>(); 
  v.wallet = j.at("wallet").get<LolPurchaseWidgetWallet>(); 
  }
}