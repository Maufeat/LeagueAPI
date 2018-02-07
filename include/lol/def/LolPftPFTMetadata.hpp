#pragma once
#include "../base_def.hpp" 
#include "LolPftPFTEndOfGameStats.hpp"
namespace lol {
  struct LolPftPFTMetadata { 
    uint64_t accountId;
    std::string env;
    std::string webRegion;
    std::string locale;
    std::string appName;
    std::string appVersion;
    std::string systemOs;
    LolPftPFTEndOfGameStats stats; 
  };
  inline void to_json(json& j, const LolPftPFTMetadata& v) {
    j["accountId"] = v.accountId; 
    j["env"] = v.env; 
    j["webRegion"] = v.webRegion; 
    j["locale"] = v.locale; 
    j["appName"] = v.appName; 
    j["appVersion"] = v.appVersion; 
    j["systemOs"] = v.systemOs; 
    j["stats"] = v.stats; 
  }
  inline void from_json(const json& j, LolPftPFTMetadata& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.env = j.at("env").get<std::string>(); 
    v.webRegion = j.at("webRegion").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.appName = j.at("appName").get<std::string>(); 
    v.appVersion = j.at("appVersion").get<std::string>(); 
    v.systemOs = j.at("systemOs").get<std::string>(); 
    v.stats = j.at("stats").get<LolPftPFTEndOfGameStats>(); 
  }
}