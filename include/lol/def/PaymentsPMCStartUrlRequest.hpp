#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PaymentsPMCStartUrlRequest { 
    bool isPrepaid;
    int16_t summonerLevel;
    int32_t gifteeAccountId;
    std::string localeId;
    std::string gifteeMessage; 
  };
  inline void to_json(json& j, const PaymentsPMCStartUrlRequest& v) {
    j["isPrepaid"] = v.isPrepaid; 
    j["summonerLevel"] = v.summonerLevel; 
    j["gifteeAccountId"] = v.gifteeAccountId; 
    j["localeId"] = v.localeId; 
    j["gifteeMessage"] = v.gifteeMessage; 
  }
  inline void from_json(const json& j, PaymentsPMCStartUrlRequest& v) {
    v.isPrepaid = j.at("isPrepaid").get<bool>(); 
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>(); 
  }
}