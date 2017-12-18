#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PaymentsPMCStartUrlResult { 
    std::string playerFacingId;
    std::string userId;
    std::string pmcStartUrl;
    std::string createdAt;
    int16_t summonerLevel;
    std::string localeId;
    std::string id; 
  };
  inline void to_json(json& j, const PaymentsPMCStartUrlResult& v) {
    j["playerFacingId"] = v.playerFacingId; 
    j["userId"] = v.userId; 
    j["pmcStartUrl"] = v.pmcStartUrl; 
    j["createdAt"] = v.createdAt; 
    j["summonerLevel"] = v.summonerLevel; 
    j["localeId"] = v.localeId; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, PaymentsPMCStartUrlResult& v) {
    v.playerFacingId = j.at("playerFacingId").get<std::string>(); 
    v.userId = j.at("userId").get<std::string>(); 
    v.pmcStartUrl = j.at("pmcStartUrl").get<std::string>(); 
    v.createdAt = j.at("createdAt").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}