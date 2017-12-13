#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RedeemLootTransactionDTO { 
    std::string lootName; 
  };
  void to_json(json& j, const RedeemLootTransactionDTO& v) {
    j["lootName"] = v.lootName; 
  }
  void from_json(const json& j, RedeemLootTransactionDTO& v) {
    v.lootName = j.at("lootName").get<std::string>(); 
  }
}