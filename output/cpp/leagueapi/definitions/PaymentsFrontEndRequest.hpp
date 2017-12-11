#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PaymentsFrontEndRequest { /**/ 
    int32_t gifteeAccountId;/**/
    std::string gifteeMessage;/**/
    bool isPrepaid;/**/
    std::string localeId;/**/
    std::string rsoToken;/**/
    int16_t summonerLevel;/**/
  };
  static void to_json(json& j, const PaymentsFrontEndRequest& v) { 
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["gifteeMessage"] = v.gifteeMessage;
    j["isPrepaid"] = v.isPrepaid;
    j["localeId"] = v.localeId;
    j["rsoToken"] = v.rsoToken;
    j["summonerLevel"] = v.summonerLevel;
  }
  static void from_json(const json& j, PaymentsFrontEndRequest& v) { 
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>(); 
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>(); 
    v.isPrepaid = j.at("isPrepaid").get<bool>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.rsoToken = j.at("rsoToken").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
  }
} 