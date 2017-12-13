#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PaymentsFrontEndRequest { 
    int16_t summonerLevel;
    int32_t gifteeAccountId;
    std::string rsoToken;
    std::string localeId;
    std::string gifteeMessage;
    bool isPrepaid; 
  };
  void to_json(json& j, const PaymentsFrontEndRequest& v) {
    j["summonerLevel"] = v.summonerLevel; 
    j["gifteeAccountId"] = v.gifteeAccountId; 
    j["rsoToken"] = v.rsoToken; 
    j["localeId"] = v.localeId; 
    j["gifteeMessage"] = v.gifteeMessage; 
    j["isPrepaid"] = v.isPrepaid; 
  }
  void from_json(const json& j, PaymentsFrontEndRequest& v) {
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>(); 
    v.rsoToken = j.at("rsoToken").get<std::string>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>(); 
    v.isPrepaid = j.at("isPrepaid").get<bool>(); 
  }
}