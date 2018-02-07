#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LCDSPlayerMessagingSimpleMessage { 
    uint64_t accountId;
    std::string msgId;
    std::string type;
    std::string titleCode;
    std::string bodyCode;
    std::vector<std::string> params; 
  };
  inline void to_json(json& j, const LCDSPlayerMessagingSimpleMessage& v) {
    j["accountId"] = v.accountId; 
    j["msgId"] = v.msgId; 
    j["type"] = v.type; 
    j["titleCode"] = v.titleCode; 
    j["bodyCode"] = v.bodyCode; 
    j["params"] = v.params; 
  }
  inline void from_json(const json& j, LCDSPlayerMessagingSimpleMessage& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.titleCode = j.at("titleCode").get<std::string>(); 
    v.bodyCode = j.at("bodyCode").get<std::string>(); 
    v.params = j.at("params").get<std::vector<std::string>>(); 
  }
}