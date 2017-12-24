#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PaymentsPMCStartUrlResult { 
    std::string userId;
    std::string createdAt;
    std::string pmcStartUrl;
    std::string id;
    int16_t summonerLevel;
    std::string localeId;
    std::string playerFacingId; 
  };
  inline void to_json(json& j, const PaymentsPMCStartUrlResult& v) {
    j["userId"] = v.userId; 
    j["createdAt"] = v.createdAt; 
    j["pmcStartUrl"] = v.pmcStartUrl; 
    j["id"] = v.id; 
    j["summonerLevel"] = v.summonerLevel; 
    j["localeId"] = v.localeId; 
    j["playerFacingId"] = v.playerFacingId; 
  }
  inline void from_json(const json& j, PaymentsPMCStartUrlResult& v) {
    v.userId = j.at("userId").get<std::string>(); 
    v.createdAt = j.at("createdAt").get<std::string>(); 
    v.pmcStartUrl = j.at("pmcStartUrl").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.playerFacingId = j.at("playerFacingId").get<std::string>(); 
  }
}