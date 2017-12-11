#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LCDSPlayerMessagingSimpleMessage { /**/ 
    std::string bodyCode;/**/
    uint64_t accountId;/**/
    std::string titleCode;/**/
    std::string type;/**/
    std::string msgId;/**/
    std::vector<std::string> params;/**/
  };
  static void to_json(json& j, const LCDSPlayerMessagingSimpleMessage& v) { 
    j["bodyCode"] = v.bodyCode;
    j["accountId"] = v.accountId;
    j["titleCode"] = v.titleCode;
    j["type"] = v.type;
    j["msgId"] = v.msgId;
    j["params"] = v.params;
  }
  static void from_json(const json& j, LCDSPlayerMessagingSimpleMessage& v) { 
    v.bodyCode = j.at("bodyCode").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.titleCode = j.at("titleCode").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.params = j.at("params").get<std::vector<std::string>>(); 
  }
} 