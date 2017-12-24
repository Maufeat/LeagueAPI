#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PaymentsFrontEndRequest { 
    int16_t summonerLevel;
    bool isPrepaid;
    int32_t gifteeAccountId;
    std::string localeId;
    std::string rsoToken;
    std::string gifteeMessage; 
  };
  inline void to_json(json& j, const PaymentsFrontEndRequest& v) {
    j["summonerLevel"] = v.summonerLevel; 
    j["isPrepaid"] = v.isPrepaid; 
    j["gifteeAccountId"] = v.gifteeAccountId; 
    j["localeId"] = v.localeId; 
    j["rsoToken"] = v.rsoToken; 
    j["gifteeMessage"] = v.gifteeMessage; 
  }
  inline void from_json(const json& j, PaymentsFrontEndRequest& v) {
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
    v.isPrepaid = j.at("isPrepaid").get<bool>(); 
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.rsoToken = j.at("rsoToken").get<std::string>(); 
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>(); 
  }
}