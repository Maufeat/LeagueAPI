#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SimpleDialogMessage { 
    uint64_t accountId;
    std::string msgId;
    std::string type;
    json params; 
  };
  inline void to_json(json& j, const SimpleDialogMessage& v) {
    j["accountId"] = v.accountId; 
    j["msgId"] = v.msgId; 
    j["type"] = v.type; 
    j["params"] = v.params; 
  }
  inline void from_json(const json& j, SimpleDialogMessage& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.params = j.at("params").get<json>(); 
  }
}