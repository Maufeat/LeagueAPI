#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PaymentsPMCStartUrlResult { /**/ 
    std::string pmcStartUrl;/**/
    std::string createdAt;/**/
    std::string id;/**/
    std::string playerFacingId;/**/
    std::string localeId;/**/
    std::string userId;/**/
    int16_t summonerLevel;/**/
  };
  static void to_json(json& j, const PaymentsPMCStartUrlResult& v) { 
    j["pmcStartUrl"] = v.pmcStartUrl;
    j["createdAt"] = v.createdAt;
    j["id"] = v.id;
    j["playerFacingId"] = v.playerFacingId;
    j["localeId"] = v.localeId;
    j["userId"] = v.userId;
    j["summonerLevel"] = v.summonerLevel;
  }
  static void from_json(const json& j, PaymentsPMCStartUrlResult& v) { 
    v.pmcStartUrl = j.at("pmcStartUrl").get<std::string>(); 
    v.createdAt = j.at("createdAt").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.playerFacingId = j.at("playerFacingId").get<std::string>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.userId = j.at("userId").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
  }
} 