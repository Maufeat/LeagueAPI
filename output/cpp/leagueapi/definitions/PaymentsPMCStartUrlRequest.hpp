#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PaymentsPMCStartUrlRequest { /**/ 
    int32_t gifteeAccountId;/**/
    bool isPrepaid;/**/
    std::string localeId;/**/
    std::string gifteeMessage;/**/
    int16_t summonerLevel;/**/
  };
  static void to_json(json& j, const PaymentsPMCStartUrlRequest& v) { 
    j["gifteeAccountId"] = v.gifteeAccountId;
    j["isPrepaid"] = v.isPrepaid;
    j["localeId"] = v.localeId;
    j["gifteeMessage"] = v.gifteeMessage;
    j["summonerLevel"] = v.summonerLevel;
  }
  static void from_json(const json& j, PaymentsPMCStartUrlRequest& v) { 
    v.gifteeAccountId = j.at("gifteeAccountId").get<int32_t>(); 
    v.isPrepaid = j.at("isPrepaid").get<bool>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.gifteeMessage = j.at("gifteeMessage").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
  }
} 