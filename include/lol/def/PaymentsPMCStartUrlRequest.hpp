#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PaymentsPMCStartUrlRequest { 
    bool isPrepaid;
    std::string localeId;
    int16_t summonerLevel;
    int32_t gifteeAccountId;
    std::string gifteeMessage; 
  };
  inline void to_json(json& j, const PaymentsPMCStartUrlRequest& v) {
    j["isPrepaid"] = v.isPrepaid; 
    j["localeId"] = v.localeId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["gifteeAccountId"] = v.gifteeAccountId; 
    j["gifteeMessage"] = v.gifteeMessage; 
  }
  inline void from_json(const json& j, PaymentsPMCStartUrlRequest& v) {
    v.isPrepaid = j.at("isPrepaid").get<bool>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>(); 
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>(); 
  }
}