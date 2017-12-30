#pragma once
#include "../base_def.hpp" 
#include "LolPftPFTEndOfGameStats.hpp"
namespace lol {
  struct LolPftPFTMetadata { 
    std::string webRegion;
    std::string env;
    std::string appName;
    std::string appVersion;
    uint64_t accountId;
    std::string locale;
    std::string systemOs;
    LolPftPFTEndOfGameStats stats; 
  };
  inline void to_json(json& j, const LolPftPFTMetadata& v) {
    j["webRegion"] = v.webRegion; 
    j["env"] = v.env; 
    j["appName"] = v.appName; 
    j["appVersion"] = v.appVersion; 
    j["accountId"] = v.accountId; 
    j["locale"] = v.locale; 
    j["systemOs"] = v.systemOs; 
    j["stats"] = v.stats; 
  }
  inline void from_json(const json& j, LolPftPFTMetadata& v) {
    v.webRegion = j.at("webRegion").get<std::string>(); 
    v.env = j.at("env").get<std::string>(); 
    v.appName = j.at("appName").get<std::string>(); 
    v.appVersion = j.at("appVersion").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.systemOs = j.at("systemOs").get<std::string>(); 
    v.stats = j.at("stats").get<LolPftPFTEndOfGameStats>(); 
  }
}