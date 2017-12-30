#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LeaverBusterLcdsSimpleMessage { 
    uint64_t accountId;
    std::string type;
    std::vector<std::string> params;
    std::string msgId; 
  };
  inline void to_json(json& j, const LeaverBusterLcdsSimpleMessage& v) {
    j["accountId"] = v.accountId; 
    j["type"] = v.type; 
    j["params"] = v.params; 
    j["msgId"] = v.msgId; 
  }
  inline void from_json(const json& j, LeaverBusterLcdsSimpleMessage& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.params = j.at("params").get<std::vector<std::string>>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
  }
}