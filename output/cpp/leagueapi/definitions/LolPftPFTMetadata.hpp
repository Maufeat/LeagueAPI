#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPftPFTEndOfGameStats.hpp>

namespace leagueapi {
  struct LolPftPFTMetadata { /**/ 
    std::string locale;/**/
    std::string appVersion;/**/
    std::string systemOs;/**/
    uint64_t accountId;/**/
    std::string webRegion;/**/
    std::string appName;/**/
    LolPftPFTEndOfGameStats stats;/**/
    std::string env;/**/
  };
  static void to_json(json& j, const LolPftPFTMetadata& v) { 
    j["locale"] = v.locale;
    j["appVersion"] = v.appVersion;
    j["systemOs"] = v.systemOs;
    j["accountId"] = v.accountId;
    j["webRegion"] = v.webRegion;
    j["appName"] = v.appName;
    j["stats"] = v.stats;
    j["env"] = v.env;
  }
  static void from_json(const json& j, LolPftPFTMetadata& v) { 
    v.locale = j.at("locale").get<std::string>(); 
    v.appVersion = j.at("appVersion").get<std::string>(); 
    v.systemOs = j.at("systemOs").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.webRegion = j.at("webRegion").get<std::string>(); 
    v.appName = j.at("appName").get<std::string>(); 
    v.stats = j.at("stats").get<LolPftPFTEndOfGameStats>(); 
    v.env = j.at("env").get<std::string>(); 
  }
} 