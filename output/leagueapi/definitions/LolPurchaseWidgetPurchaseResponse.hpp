#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolPurchaseWidgetTransaction.hpp>"
#include "<leagueapi/definitions/LolPurchaseWidgetPurchaseItem.hpp>"
#include "<leagueapi/definitions/LolPurchaseWidgetWallet.hpp>"

namespace leagueapi {
  struct LolPurchaseWidgetPurchaseResponse { /**/ 
    LolPurchaseWidgetWallet wallet;/**/
    std::vector<LolPurchaseWidgetPurchaseItem> items;/**/
    std::vector<LolPurchaseWidgetTransaction> transactions;/**/
  };
  static void to_json(json& j, const LolPurchaseWidgetPurchaseResponse& v) { 
    j["wallet"] = v.wallet;
    j["items"] = v.items;
    j["transactions"] = v.transactions;
  }
  static void from_json(const json& j, LolPurchaseWidgetPurchaseResponse& v) { 
    v.wallet = j.at("wallet").get<LolPurchaseWidgetWallet>(); 
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>(); 
    v.transactions = j.at("transactions").get<std::vector<LolPurchaseWidgetTransaction>>(); 
  }
} 