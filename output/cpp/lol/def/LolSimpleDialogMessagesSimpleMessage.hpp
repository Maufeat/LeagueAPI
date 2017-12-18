#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSimpleDialogMessagesSimpleMessage { 
    std::string msgId;
    std::string type;
    std::vector<std::string> params;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolSimpleDialogMessagesSimpleMessage& v) {
    j["msgId"] = v.msgId; 
    j["type"] = v.type; 
    j["params"] = v.params; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolSimpleDialogMessagesSimpleMessage& v) {
    v.msgId = j.at("msgId").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.params = j.at("params").get<std::vector<std::string>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}