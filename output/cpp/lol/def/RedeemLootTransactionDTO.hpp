#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RedeemLootTransactionDTO { 
    std::string lootName; 
  };
  inline void to_json(json& j, const RedeemLootTransactionDTO& v) {
    j["lootName"] = v.lootName; 
  }
  inline void from_json(const json& j, RedeemLootTransactionDTO& v) {
    v.lootName = j.at("lootName").get<std::string>(); 
  }
}