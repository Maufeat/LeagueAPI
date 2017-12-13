#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LCDSPlayerMessagingSimpleMessage { 
    std::string msgId;
    std::string titleCode;
    std::string type;
    std::vector<std::string> params;
    std::string bodyCode;
    uint64_t accountId; 
  };
  void to_json(json& j, const LCDSPlayerMessagingSimpleMessage& v) {
    j["msgId"] = v.msgId; 
    j["titleCode"] = v.titleCode; 
    j["type"] = v.type; 
    j["params"] = v.params; 
    j["bodyCode"] = v.bodyCode; 
    j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LCDSPlayerMessagingSimpleMessage& v) {
    v.msgId = j.at("msgId").get<std::string>(); 
    v.titleCode = j.at("titleCode").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.params = j.at("params").get<std::vector<std::string>>(); 
    v.bodyCode = j.at("bodyCode").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}