#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PaymentsPMCStartUrlResult { 
    std::string id;
    std::string localeId;
    std::string userId;
    int16_t summonerLevel;
    std::string playerFacingId;
    std::string pmcStartUrl;
    std::string createdAt; 
  };
  inline void to_json(json& j, const PaymentsPMCStartUrlResult& v) {
    j["id"] = v.id; 
    j["localeId"] = v.localeId; 
    j["userId"] = v.userId; 
    j["summonerLevel"] = v.summonerLevel; 
    j["playerFacingId"] = v.playerFacingId; 
    j["pmcStartUrl"] = v.pmcStartUrl; 
    j["createdAt"] = v.createdAt; 
  }
  inline void from_json(const json& j, PaymentsPMCStartUrlResult& v) {
    v.id = j.at("id").get<std::string>(); 
    v.localeId = j.at("localeId").get<std::string>(); 
    v.userId = j.at("userId").get<std::string>(); 
    v.summonerLevel = j.at("summonerLevel").get<int16_t>(); 
    v.playerFacingId = j.at("playerFacingId").get<std::string>(); 
    v.pmcStartUrl = j.at("pmcStartUrl").get<std::string>(); 
    v.createdAt = j.at("createdAt").get<std::string>(); 
  }
}