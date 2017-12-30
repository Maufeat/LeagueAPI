#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LCDSPlayerMessagingSimpleMessage { 
    std::vector<std::string> params;
    std::string titleCode;
    uint64_t accountId;
    std::string bodyCode;
    std::string type;
    std::string msgId; 
  };
  inline void to_json(json& j, const LCDSPlayerMessagingSimpleMessage& v) {
    j["params"] = v.params; 
    j["titleCode"] = v.titleCode; 
    j["accountId"] = v.accountId; 
    j["bodyCode"] = v.bodyCode; 
    j["type"] = v.type; 
    j["msgId"] = v.msgId; 
  }
  inline void from_json(const json& j, LCDSPlayerMessagingSimpleMessage& v) {
    v.params = j.at("params").get<std::vector<std::string>>(); 
    v.titleCode = j.at("titleCode").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.bodyCode = j.at("bodyCode").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
  }
}