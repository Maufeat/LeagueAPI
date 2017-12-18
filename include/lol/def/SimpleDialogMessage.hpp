#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SimpleDialogMessage { 
    std::string msgId;
    std::string type;
    json params;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const SimpleDialogMessage& v) {
    j["msgId"] = v.msgId; 
    j["type"] = v.type; 
    j["params"] = v.params; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, SimpleDialogMessage& v) {
    v.msgId = j.at("msgId").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.params = j.at("params").get<json>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}