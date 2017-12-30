#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PaymentsPMCStartUrlResult { 
    std::string id;
    std::string pmcStartUrl;
    int16_t summonerLevel;
    std::string userId;
    std::string createdAt;
    std::string localeId;
    std::string playerFacingId; 
  };
  inline void to_json(json& j, const PaymentsPMCStartUrlResult& v) {
    j["id"] = v.id; 
    j["pmcStartUrl"] = v.pmcStartUrl; 
    j["summonerLevel"] = v.summonerLevel; 
    j["userId"] = v.userId; 
    j["createdAt"] = v.createdAt; 
    j["localeId"] = v.localeId; 
    j["playerFacingId"] = v.playerFacingId; 
  }
  inline void from_json(const json& j, PaymentsPMCStartUrlResult& v) {
    v.id = j.at("id").get<std::string>(); 
    v.pmcStartUrl = j.at("pmcStartUrl").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
    v.userId = j.at("userId").get<std::string>(); 
    v.createdAt = j.at("createdAt").get<std::string>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.playerFacingId = j.at("playerFacingId").get<std::string>(); 
  }
}