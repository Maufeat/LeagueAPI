#pragma once
#include "../base_def.hpp" 
#include "LolPftPFTEndOfGameStats.hpp"
namespace lol {
  struct LolPftPFTMetadata { 
    std::string appName;
    std::string systemOs;
    std::string locale;
    std::string appVersion;
    std::string webRegion;
    uint64_t accountId;
    LolPftPFTEndOfGameStats stats;
    std::string env; 
  };
  inline void to_json(json& j, const LolPftPFTMetadata& v) {
    j["appName"] = v.appName; 
    j["systemOs"] = v.systemOs; 
    j["locale"] = v.locale; 
    j["appVersion"] = v.appVersion; 
    j["webRegion"] = v.webRegion; 
    j["accountId"] = v.accountId; 
    j["stats"] = v.stats; 
    j["env"] = v.env; 
  }
  inline void from_json(const json& j, LolPftPFTMetadata& v) {
    v.appName = j.at("appName").get<std::string>(); 
    v.systemOs = j.at("systemOs").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.appVersion = j.at("appVersion").get<std::string>(); 
    v.webRegion = j.at("webRegion").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.stats = j.at("stats").get<LolPftPFTEndOfGameStats>(); 
    v.env = j.at("env").get<std::string>(); 
  }
}