#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RedeemLootTransactionDTO { /**/ 
    std::string lootName;/**/
  };
  static void to_json(json& j, const RedeemLootTransactionDTO& v) { 
    j["lootName"] = v.lootName;
  }
  static void from_json(const json& j, RedeemLootTransactionDTO& v) { 
    v.lootName = j.at("lootName").get<std::string>(); 
  }
} 