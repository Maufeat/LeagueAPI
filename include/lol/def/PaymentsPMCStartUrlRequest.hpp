#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PaymentsPMCStartUrlRequest { 
    bool isPrepaid;
    int32_t gifteeAccountId;
    int16_t summonerLevel;
    std::string localeId;
    std::string gifteeMessage; 
  };
  inline void to_json(json& j, const PaymentsPMCStartUrlRequest& v) {
    j["isPrepaid"] = v.isPrepaid; 
    j["gifteeAccountId"] = v.gifteeAccountId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["localeId"] = v.localeId; 
    j["gifteeMessage"] = v.gifteeMessage; 
  }
  inline void from_json(const json& j, PaymentsPMCStartUrlRequest& v) {
    v.isPrepaid = j.at("isPrepaid").get<bool>(); 
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>(); 
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>(); 
  }
}