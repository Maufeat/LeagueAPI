#pragma once
#include "../base_def.hpp" 
#include "LolPftPFTEndOfGameStats.hpp"
namespace lol {
  struct LolPftPFTMetadata { 
    std::string systemOs;
    LolPftPFTEndOfGameStats stats;
    std::string env;
    uint64_t accountId;
    std::string appVersion;
    std::string webRegion;
    std::string appName;
    std::string locale; 
  };
  inline void to_json(json& j, const LolPftPFTMetadata& v) {
    j["systemOs"] = v.systemOs; 
    j["stats"] = v.stats; 
    j["env"] = v.env; 
    j["accountId"] = v.accountId; 
    j["appVersion"] = v.appVersion; 
    j["webRegion"] = v.webRegion; 
    j["appName"] = v.appName; 
    j["locale"] = v.locale; 
  }
  inline void from_json(const json& j, LolPftPFTMetadata& v) {
    v.systemOs = j.at("systemOs").get<std::string>(); 
    v.stats = j.at("stats").get<LolPftPFTEndOfGameStats>(); 
    v.env = j.at("env").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.appVersion = j.at("appVersion").get<std::string>(); 
    v.webRegion = j.at("webRegion").get<std::string>(); 
    v.appName = j.at("appName").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
  }
}