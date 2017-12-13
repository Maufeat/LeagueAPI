#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetWallet.hpp>
#include <lol/def/LolPurchaseWidgetPurchaseItem.hpp>
#include <lol/def/LolPurchaseWidgetTransaction.hpp>
namespace lol {
  struct LolPurchaseWidgetPurchaseResponse { 
    LolPurchaseWidgetWallet wallet;
    std::vector<LolPurchaseWidgetPurchaseItem> items;
    std::vector<LolPurchaseWidgetTransaction> transactions; 
  };
  void to_json(json& j, const LolPurchaseWidgetPurchaseResponse& v) {
  j["wallet"] = v.wallet; 
  j["items"] = v.items; 
  j["transactions"] = v.transactions; 
  }
  void from_json(const json& j, LolPurchaseWidgetPurchaseResponse& v) {
  v.wallet = j.at("wallet").get<LolPurchaseWidgetWallet>(); 
  v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>(); 
  v.transactions = j.at("transactions").get<std::vector<LolPurchaseWidgetTransaction>>(); 
  }
}