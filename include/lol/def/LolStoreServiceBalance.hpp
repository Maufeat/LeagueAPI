#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreServiceBalance { 
    std::string currency;
    int64_t amount; 
  };
  inline void to_json(json& j, const LolStoreServiceBalance& v) {
    j["currency"] = v.currency; 
    j["amount"] = v.amount; 
  }
  inline void from_json(const json& j, LolStoreServiceBalance& v) {
    v.currency = j.at("currency").get<std::string>(); 
    v.amount = j.at("amount").get<int64_t>(); 
  }
}