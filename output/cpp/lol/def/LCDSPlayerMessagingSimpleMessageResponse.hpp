#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LCDSPlayerMessagingSimpleMessageResponse { 
    std::string msgId;
    std::string command;
    uint64_t accountId; 
  };
  void to_json(json& j, const LCDSPlayerMessagingSimpleMessageResponse& v) {
    j["msgId"] = v.msgId; 
    j["command"] = v.command; 
    j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LCDSPlayerMessagingSimpleMessageResponse& v) {
    v.msgId = j.at("msgId").get<std::string>(); 
    v.command = j.at("command").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}